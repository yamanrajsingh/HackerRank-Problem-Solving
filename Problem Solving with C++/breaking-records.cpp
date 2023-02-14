#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int score[n];
    for(int i=0;i<n;i++){
        cin>>score[i];
    }
    int minimum=score[0],maximum=score[0];
    int min=0,max=0;
    for(int i=1;i<n;i++)
    {
        // cout<<i<<" "<<i+1<<endl;
        // cout<<"minimum="<<minimum<<"  maximum= "<<maximum<<" min="<<min<<" max="<<max<<endl;
       if (score[i]>maximum) {  
            max++;
           maximum=score[i];  
       }
         if (score[i]<minimum) {
            min++;
           minimum=score[i];
       }
      
    }
    cout<<max<<" "<<min;
    return 0;
}
