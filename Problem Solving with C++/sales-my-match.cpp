#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n,a,ans=0;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // To avoid counting the same element multiple times
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
        if (count>1)
        {
            ans=count/2;
            result.push_back(ans);
        }
    }
    cout<<std::accumulate(result.begin(), result.end(), 0);
    
    return 0;
}
