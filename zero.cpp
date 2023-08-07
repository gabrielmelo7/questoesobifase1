#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
   int n, s;
   int sum = 0;
   cin >> n;
   stack<int> pt;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        pt.push(s);
        if(pt.top() == 0)
        {
            pt.pop();
            pt.pop();
        }
    }
    while (!pt.empty())
    {
        sum = sum + pt.top();
        pt.pop();
    }
    cout << sum;
    return 0;
}