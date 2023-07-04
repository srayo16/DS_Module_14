#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << endl
         << q.size() << endl
         << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}