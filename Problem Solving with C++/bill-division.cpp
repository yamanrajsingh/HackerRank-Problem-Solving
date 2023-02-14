#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cin>>b;
    int sum=0,add,half,sub;
    for (int i=0; i<n; i++) {
          sum=sum+arr[i];
          
    }
    
    add=sum-arr[k];
    
    half=add/2;
   
    sub=b-half;
    
    if (sub==0) {
    cout<<"Bon Appetit";
    }
    else{
        cout<<sub;
    }
    return 0;
}
