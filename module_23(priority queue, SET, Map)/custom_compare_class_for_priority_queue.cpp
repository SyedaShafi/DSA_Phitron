#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->marks = marks;
        this->name = name;
        this->roll = roll;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        return a.marks > b.marks;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    string name;
    int roll, marks;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().marks << " " << pq.top().roll << "\n";
        pq.pop();
    }
}