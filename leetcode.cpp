#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        queue<int> q2;
        int last;
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            if (q.empty())
            {
                last = x;
                break;
            }

            q2.push(x);
        }

        q = q2;
        return last;
    }

    int top()
    {
        queue<int> q2;
        int last;
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            if (q.empty())
            {
                last = x;
            }

            q2.push(x);
        }

        q = q2;
        return last;
    }

    bool empty()
    {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{

    return 0;
}