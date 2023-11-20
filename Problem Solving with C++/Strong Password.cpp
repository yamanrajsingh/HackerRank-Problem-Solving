int minimumNumber(int n, string p) {
    int d=0;
    int U=0,l=0,s=0;
    for(int i=0;i<n;i++)
     {
         if(p[i]>='0' && p[i]<='9' )
         {
             d++;
         }
         else if(p[i]>='A' && p[i]<='Z' )
         {
             U++;
         }
        else if(p[i]>='a' && p[i]<='z' )
         {
             l++;
         }
         else
         {
             s++;
         }
     }
     int count=0;
     if(d==0)
     {
       count++;  
     }
      if(U==0)
     {
       count++;  
     }
      if(l==0)
     {
       count++;  
     }
      if(s==0)
     {
       count++;  
     }
     cout<<count;
    //   if (n < 6){
    //         count += (6-count);
    //         return count-n;
    //     }
    //     return count;
    int ans= max((6-n),count);
    return ans;
     

}