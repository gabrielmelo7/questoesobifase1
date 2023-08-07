#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, cont;
    cont = 0;
    cin >> n;
    cin.ignore();
    vector <int> seq (n);
    string q;
    getline (cin, q);
    for (int i = 0; i < n; i++)
    {
        seq[i] = q[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (seq[i] == '1' - '0')
        {
            if (seq[i+1] == '0' - '0' && seq[i+2] == '0' - '0')
            {
                cont ++;
            }
        }
    }
    cout << cont;
    

    

    return 0;
}