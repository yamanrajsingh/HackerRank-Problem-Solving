#include <iostream>
using namespace std;
int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arrq[q];
    for (int i = 0; i < q; i++)
    {
        cin >> arrq[i];
    }
    for (int i = 0; i < q; i++)
    {
     k=k%n;
     int x=(arrq[i]-k+n)%n;
     cout<<arr[x]<<endl;
       
      
      
    }


    return 0;
}
