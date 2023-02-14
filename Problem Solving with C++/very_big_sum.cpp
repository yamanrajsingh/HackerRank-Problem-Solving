#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
 long long arr[n];
 long long sum=0;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
cout<<sum;
return 0;
}
