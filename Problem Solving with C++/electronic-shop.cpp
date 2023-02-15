#include <iostream>

using namespace std;

int main()
{

    int b, n, m, i, max = 0, j, s;
    cin >> b >> n >> m;
    int k[n], d[m];
    for (i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    for (i = 0; i < m; i++)
    {
        cin >> d[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            // cout<<"i= "<<i<<" j= "<<j<<"  ";
            s = k[i] + d[j];
            // cout<<s<<endl;

            if (s <= b)
            {
                if (max < b && max<s)

                {
                    max = s;
                }
            }
        }
    }
    if (max == 0 )
    {
        cout << "-1";
    }
    else
    {
        cout << max;
    }

    // if (max > b || max > s)
    // {
    //     cout << "-1";
    // }

    // else
    // {
    //     cout << max;
    // }
    return 0;
}
