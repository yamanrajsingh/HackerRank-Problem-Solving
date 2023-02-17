#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int k, max = 0, var;
    vector<int> v;
    int a;
    for (int i = 0; i < 26; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    string s;
    cin >> s;
    for (int j = 0; j < s.length(); j++)
    {

        k = 0;
        for (char x = 'a'; x <= 'z'; x++)
        {

            if (s[j] == x)
            {
                if (max < v[k])
                {
                    max = v[k];
                }
            }
            k++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == v[i])
        {
            var = i;
            break;
        }
    }

    cout << v[var];

    return 0;
}