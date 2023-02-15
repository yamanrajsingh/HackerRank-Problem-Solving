#include<iostream>
using namespace std;
int main(){
    int s,t,a,b,m,n,count=0,add=0;
    cin>>s>>t>>a>>b>>m>>n;
    int i,app[m],org[n];
    for (i=0; i<m; i++) {
    cin>>app[i];
    }
    for (i=0; i<n; i++) {
    cin>>org[i];
    }
    for (i=0; i<m; i++) {
    app[i]=a+app[i];
    
    }
    for (i=0; i<n; i++) {
    org[i]=b+org[i];
    }
    for (i=0; i<=m; i++) {
    if (app[i]>=s && app[i]<=t) {
    count++;
    }
    }
    cout<<count<<endl;
     for (i=0; i<n; i++) {
    if (org[i]<=t && org[i]>=s) {
    add++;
    }
    }
    cout<<add;
    return 0;
}
