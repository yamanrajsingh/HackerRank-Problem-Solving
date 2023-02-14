#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,sum=0;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
