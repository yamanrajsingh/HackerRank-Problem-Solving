#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0; i<t; i++) {
       int n,k,count=0;;
       cin>>n>>k;
       int a[n];
      for (int i=0; i<n; i++)  {
         cin>>a[i];
       }
       for (int i=0; i<n; i++) {
       if (a[i]<=0) {
       count++;
       }
       }
       if (k>count) {
       cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
    return 0;
}
