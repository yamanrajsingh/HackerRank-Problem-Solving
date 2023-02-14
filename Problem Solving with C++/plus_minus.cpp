#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float a=0,b=0,c=0;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            a++;
        }
        else if(arr[i]<0)
        {
           b++;
        }
        else 
        {
           c++;
        }
    
    }
    cout<<fixed<<setprecision(4)<<a/n<<endl;
    cout<<fixed<<setprecision(4)<<b/n<<endl;
    cout<<fixed<<setprecision(4)<<c/n<<endl;
    return 0; 
}
