#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int cont = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> s;
        if(s == 'V')
        {
            cont ++;
        }
    }
    if(cont == 6 ||cont == 5)
    {
        cout << '1';
    }
    else if(cont == 3 || cont == 4)

    {
        cout << '2';
    }
    else if(cont == 1 || cont == 2)
    {
        cout << '3';
    }
    else 
    {
        cout << "-1";
    }
    return 0;
}