#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, d;
    int cont = 0;
    bool find = false;
    cin >> n;
    cin >> d;
    cin >> a;
    for(int i = a; i <= n; i++, cont++)
    {
       if(i == d)
         {
            find = true;
             break; 
         }
         
    } 
    if (find == false)
    {
    for (int i = 1; i < d; i++)
    {
        cont++;
    }
    }
    cout << cont;
    return 0;
}