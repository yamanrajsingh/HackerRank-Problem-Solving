#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,x,k;
    cin>>n;
    cin>>k;    
    std::vector<int> v;
    for (int i=0; i<n; i++) {
        
    cin>>x;
    v.push_back(x);
    }
      sort(v.begin(),v.end());
    int max;
    max=*max_element(v.begin(),v.end());
    if (max>k) {
        cout<<max-k;
    
    }
    else{
        cout<<"0";
    }
    return 0;
}
