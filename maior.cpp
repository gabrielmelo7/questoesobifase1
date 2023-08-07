#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int chao, teto, soma, resp;
    cin >> chao;
    cin >> teto;
    cin >> soma;
    string test;
    priority_queue<int> correct;
    for (int i = chao; i <= teto; i++)
    {
        int sum = 0;
        test = to_string(i);
        for (char c : test)
        {
            sum = sum + (c - '0');
        }
        if (sum == soma)
        {
            correct.push(i);
        }
    }
    if(!correct.empty())
    {
        cout << correct.top();
    }
    else
    {
        cout << "-1";
    }


    return 0;
}