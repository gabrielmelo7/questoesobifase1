#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int div = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            div++;
        }
    }
    cout << div;




    return 0;
}