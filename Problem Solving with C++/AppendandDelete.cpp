#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    int k;
    cin >> k;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != t[i])
        {
            s.erase(s.begin() + i);
        }
    }

    return 0;
}