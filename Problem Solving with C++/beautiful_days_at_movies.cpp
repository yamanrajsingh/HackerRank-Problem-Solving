#include <iostream>
#include <cstdlib>
using namespace std;
int reverse1 (int a){
    int r,sum=0;
    while (a>0) {
    r=a%10;
    sum=(sum*10) +r;
    a=a/10;
    }
    return sum;
}
int main(){
    int  i,j,k,count=0;
    cin>>i>>j>>k;
      int rev,d;
    for (int n=i; n<=j; n++) {
        rev=reverse1(n);
        // cout<<rev<<endl;
        d=abs(n-rev);
        if (d%k==0) {
        count++;
        }
    
    }
    cout<<count;
    return 0;
}