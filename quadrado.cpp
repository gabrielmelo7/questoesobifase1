#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, x, t1, t2;
    cin >> n;                              
    int mat[n][n];
    int z = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)         
        {
            cin >> mat[i][j];
        }
    }

    while (z == 0)
        { for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 0)             
                {
                x = mat[i][j];
                t1 = i;
                t2 = j;
                z = 1;
                }
            } } 
             }
        int sum = 0;
        int min = 0;
    if ((t2 + 1) < n)
    {
        for (int i = 0; i < n; i++)
        {                                    
            sum = sum + mat[i][t2+1];
        }
        for (int i = 0; i < n; i++)
        {
            min = min + mat[t1][i];
        }
        x = sum - min;
    }
    else    
    {
         for (int i = 0; i < n; i++) 
        {                                   
            sum = sum + mat[i][t2-1];
        }
        for (int i = 0; i < n; i++)
        {
            min = min + mat[t1][i];             
        }
        x = sum - min;
    }
    cout << x << "\n" << (t1 + 1) << "\n" << (t2 + 1) << "\n";
    return 0;
}