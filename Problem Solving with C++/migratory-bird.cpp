#include<iostream>
using namespace std;
int main(){
int n,max=0,var;
cin>>n;
int arr[n],i,j;
for ( i = 0; i < n; i++)
{
    cin>>arr[i];
}

for ( i = 1; i <= 5; i++){
    int count=0;
    for ( j = 0; j < n; j++){
    if (arr[j]==i)
    {
        count++;
    }
    if (max<count)
    {
       max=count;   
        var=j;
    }
    }
    
}

  cout<<arr[var]<<endl;
    return 0;
}
