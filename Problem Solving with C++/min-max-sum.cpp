#include<iostream>
using namespace std;

int main()
{
    long int a[5];
    int i;
    long int sum=0,max,min;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
     for(i=0;i<5;i++){
        sum=sum+a[i];
    }
     max=a[0];
    for(i=0;i<5;i++){
        if (a[i]<=max)
        { 
            /* code */max=a[i];
        }
        
    }
   
    min=a[0];
    for(i=0;i<5;i++){
        if (a[i]>=min)
        { 
            /* code */min=a[i];
        } 
    }
       cout<<(sum-min);
       cout<<" ";
       cout<<(sum-max);

        
    
    return 0;
}
