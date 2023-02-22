#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
   
    for (int i = 1; i <= n; i++)
    {
         int x;
         cin>>x;
        v.push_back(x);
    }
    for (int i = 1; i <= v.size(); i++)
    {
        // cout<<"  For i=   "<<i;
        for (int j = 0; j < v.size(); j++)
        {
           
            if (i == v[j])
            {
                //  cout<<"   For j=  "<<j;
                int temp = j + 1;
                // cout<<"  temp=  "<<temp;
                for (int k = 0; k < v.size(); k++)
                {
                    if (temp == v[k])
                    {
                        // cout<<"  for k== "<<k;
                        cout << k+1 << endl;
                    }
                }
            }
        }
    }

    return 0;
}