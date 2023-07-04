#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool isEmpty()
    {
        return l.empty();
        // if (l.size() <= 0)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
    }
};

int main()
{
    MyQueue q;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.isEmpty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}