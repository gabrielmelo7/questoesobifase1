#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int res = 0, n, s;
    cin >> n;
    cin >> s;
    vector<int> med (n);
    for (int i = 0; i < n; i++)
    {
        cin >> med[i];
    }
    while(med.empty() != true)
    {
        int j = 0;
        while (med.size() - j > 0)
        { 
            int sum = 0;
        for (int i = 0; i < med.size() - j; i++)
        {
            sum = sum + med[i];
        }
        if (sum == s)
            {
                res++;
            } 
        j++;
        }
        med.erase(med.begin());
    }
    cout << res;
    return 0;
}