#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

void pro(vector<vector<int>> &br, int a, int b, int c)
       {
            int v = 10*b + c;
            br[a].push_back(v);
        }

int main ()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
  vector<vector<int>> br (4, vector<int> ());
  string s;
  cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int b = s[i-2] - '0';
        int c = s[i-1] - '0';
        if(s[i] == 'C') 
        {
           int a = 0;
           pro(br, a, b, c);
        }
        else if(s[i] == 'E')
        {
           int a = 1;
           pro(br, a, b, c);
        }
        else if(s[i] == 'U')
        {
           int a = 2;
           pro(br, a, b, c);
        }
        else if(s[i] == 'P')
        {
           int a = 3;
           pro(br, a, b, c);
        }
    }
    for(int i = 0; i < 4; i++)
    {
        int vrt = 13;
        bool dup = false;
        for(int j = 0; j < br[i].size(); j++)
        {
            for (int k = j + 1; k < br[i].size(); k++)
            {
                if(br[i][j] == br[i][k])
                {
                    cout << "erro" << "\n";
                    dup = true;
                    break;
                }
            }
           break;
        }
        if (dup == false)
        {
         while (br[i].empty() == false)
         {   
          vrt--;
          br[i].pop_back();
         }
        cout << vrt << "\n";
        }
    }
    return 0;
}