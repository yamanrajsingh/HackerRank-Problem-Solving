#include<iostream>
using namespace std;

    int main()
    {
     long x1,v1,x2,v2,i;
     long k1,k2;
    cin>>x1>>v1>>x2>>v2;
    for(i=0;i<=10000;i++)
    {
    k1=(v1*i)+x1;
    k2=(v2*i)+x2;
    
    if(k1==k2)
    {
        cout<<"YES";
        exit(0);
    }
    
    }
    cout<<"NO";
    
    return 0;
}
