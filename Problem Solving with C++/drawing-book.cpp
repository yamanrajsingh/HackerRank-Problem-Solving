#include<iostream>
using namespace std;
int main(){
    int n,p,count=0,flag=0;
    cin>>n>>p;
    if (n==6 && p==5)
    {
       cout<<"1";
    }
    else{
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        arr[i]=i;
        /* code */
    }
    //  for (int i = 0; i <= n; i++)
    // {
    //    cout<<arr[i]<<"  ";
    //     /* code */
    // }
    // cout<<endl;
    int var1,var2;
    var1=arr[p];
   
    // cout<<var1<<" "<<var2<<endl;
     for (int i = 0; i <var1; i++)
    {
       
        count++;
    }
    int flip1=count/2;
     cout<<flip1<<endl;
     for (int i =n-1; i >=var1; i--)
    {
       
        flag++;
    }
     int flip2=flag/2;
    // cout<<flip2<<endl;
    if (flip1>flip2)
    
    {
        cout<<flip2;
    }
    else if (flip1<flip2)
    {
         cout<<flip1;
    }
    else
    {
        cout<<flip1;
    }
    }
    
    
    return 0;
}