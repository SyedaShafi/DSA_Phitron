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
        return a.marks < b.marks;
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
    int q;
    cin >> q;
    while (q--)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
        }
        else if (cmd == 1)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
        }
        else if (cmd == 2)
        {
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty\n";
                }
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << "\n";
            }
        }
    }
}