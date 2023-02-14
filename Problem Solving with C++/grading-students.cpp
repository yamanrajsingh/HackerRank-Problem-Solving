#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,j,f;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    { 
        for(j=0;j<=5;j++)
        {
            
        if((arr[i]+j)%5==0)
        {
           f=arr[i]+j; 
           break;
        }
        }
    if(arr[i]>=38 && arr[i]<100){
    if(f-arr[i]<3)
    {
        arr[i]=f;
    }
    }

    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    return 0;
}
