#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
      int shared,liked,cumulative=0,temp=5;
    for (int i=0; i<n; i++) {
 
   shared=temp;
   liked=shared/2;
   cumulative=cumulative+liked;
   shared=liked*3;
   temp=shared;
    }
    cout<<cumulative;
    return 0;
}
