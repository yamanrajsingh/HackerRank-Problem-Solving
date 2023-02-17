#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,x,max=0;
    cin>>n;
    vector<int >v;
    for (int i=0; i<n; i++) {
      cin>>x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    for (int i=0; i<v.size(); i++) {
        int count=0;
              for (int j=0; j<v.size(); j++) {
            if (v[i]-v[j]==-1 || v[i]-v[j]==0) {
                   count++;
            }
            if (max<count) {
               max=count;
            }
    }
    }
    cout<<max;
    return 0;
}