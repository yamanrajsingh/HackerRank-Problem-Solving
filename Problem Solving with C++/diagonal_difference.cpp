#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
    int n,i,j,a[100][100],sum=0,sum1=0,d;
    cin>>n;
    for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             cin>>a[i][j];
         }
    }
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            if (i==j) {
                sum=sum+a[i][j];
            }
         }
     }
     
     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
            if (i+j==(n-1)) {
                sum1=sum1+a[i][j];
            }
         }
     }
     d=sum-sum1;
     cout<<abs(d);
    return 0;
}
