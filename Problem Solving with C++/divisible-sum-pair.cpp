#include<iostream>
using namespace std;
int main(){
    int a[100],i,k,s,j,flag=0;
    cin>>s>>k;
    for(i=0;i<s;i++){
        cin>>a[i];
    }
     for(i=0;i<s;i++){
         for(j=i+1;j<s;j++)
         {
           if((a[i]+a[j])%k==0)  {
               flag++;
           }
         }
       
    }
    cout<<flag;
    return 0;
}
