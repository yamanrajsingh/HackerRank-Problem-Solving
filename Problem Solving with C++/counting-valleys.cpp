#include <iostream>
using namespace std;
int main()
{
   int steps,sum=0,count=0,D=0,U=0;
   cin>>steps;
   string path;
   cin>>path;
   for (int i = 0; i < steps; i++)
   {
      
       if (path[i]=='U')
       {
        
       sum++;
       if (sum==0) {
       count++;
       }

       }
       else
       {
          
        sum--;;
       }


   }
   cout<<count;
   
    return 0;
}
