string happyLadybugs(string b) {
   int n=b.length();
   if(n==1 && b[0]!='_') return "NO";
   unordered_map<char,int>m;
   bool check =false;
   for(auto it :b)
   {
       if(it=='_')
       {
           check =true;
       }
       m[it]++;
   }
   if(check==false)
   {
       for(int i=1;i<n;i++)
       {
           if((b[i-1]==b[i])|| (b[i]==b[i+1]))
           {
               
           }
           else {
           return "NO";
           }
       }
   }
   else {
   
       for(auto it:m)
       {
         if( it.first!='_' && it.second==1)
           {
               return "NO";
           }
       }
   }
   return "YES";
}