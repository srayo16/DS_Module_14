#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> s;

    MyQueue()
    {
    }

    void push(int x)
    {
        s.push(x);
    }

    int pop()
    {
        stack<int> s2;
        int last;
        while (!s.empty())
        {
            int l = s.top();
            s.pop();
            if (s.empty())
            {
                last = l;
                break;
            }
            s2.push(l);
        }

        while (!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }

        return last;
    }

    int peek()
    {
        stack<int> s2;
        int last;
        while (!s.empty())
        {
            int l = s.top();
            s.pop();
            if (s.empty())
            {
                last = l;
            }
            s2.push(l);
        }

        while (!s2.empty())
        {
            s.push(s2.top());
            s2.pop();
        }

        return last;
    }

    bool empty()
    {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

int main()
{

    return 0;
}