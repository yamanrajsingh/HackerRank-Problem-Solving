#include <iostream>
using namespace std;
int main(){
    
    int t,height=1;
    cin>>t;
  
    for (int i=0; i<t; i++) {
    height=1;
        int a;
        cin>>a;
    for (int i=1; i<=a; i++) {
     
        if (i % 2 == 1) {
            height *= 2;
            
        } else {
            height++;
           
        }
    }
    cout<<height<<endl;
    }
    return 0;
}
