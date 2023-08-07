#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int n, p, m;
    string cam;
    vector<char> med;
    vector<char> peq;
    cin >> n;
    cin.ignore();
    getline (cin, cam);
    for (char c : cam)
    {
        if (c == ' ')
        {
            continue;
        }
        else if (c == '1')
        {
            peq.push_back(c);
        }
        else 
        {
            med.push_back(c);
        }
                
    }
    cin >> p;
    cin >> m;
    if (peq.size() == p && med.size() == m)
    {
        cout << "S";
    }
    else
    {
        cout << "N";
    }

    return 0;
}