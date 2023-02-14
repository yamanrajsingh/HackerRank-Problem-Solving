#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
      int arr[1000000],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
       
    }
   int ma=arr[0];
    for(i=0;i<n;i++)
    {
        if(ma<=arr[i])
        {
            ma=arr[i];
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(ma==arr[i])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
