#include<iostream>
using namespace std;
int main(){
    int count;
    cin>>count;
   for (int  i = 0; i < count; i++)
   {
    int n,m,s;
    cin>>n>>m>>s;
    int r;
    r=(s+m-2)%n+1;
    cout<<r<<endl;
   }
   
    return 0;
}