#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {

            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            sz--;
            Node *deleteNode = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
            }
            else
            {

                head->prev = NULL;
            }
            delete deleteNode;
        }
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool isEmpty()
    {
        if (sz <= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
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