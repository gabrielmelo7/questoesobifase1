#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,a,b,c;
    cin >> m;
    cin >> a;
    cin >> b;
    c = m-a-b;
    if (c > a)
    {
        if(c > b)
        {
            cout << c;
        }
        else{
            cout << b;
        }
    }
    else{
        if (a > b)
        {
            cout << a;
        }
        else{
            cout << b;
        }
    }




    return 0;
}