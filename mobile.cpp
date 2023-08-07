#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if (a == b + c + d && b + c == d && b == c)
    {
        cout << "S";
    }
    else{
        cout << "N";
    }



    return 0;
}