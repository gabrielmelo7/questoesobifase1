#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, a, n, t;
    cin >> d;
    cin >> a;
    cin >> n;

    if (n == 1)
    {
        t = 31 * d;
    }

    else if (n <= 15)
    {

    for (int i = 1; i < n; i++)
    {
        t = (31 - i) * (d + a*i);
    }

    }

    else
    {
        t = ((31 - n) + 1) * (d + a*14);
    }

    cout << t << "\n";
    return 0;
}