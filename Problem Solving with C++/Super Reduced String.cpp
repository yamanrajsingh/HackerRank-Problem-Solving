string superReducedString(string s) {
   int n=s.size();
   int i=1;
   while(i<n)
   {
       if(s[i-1]==s[i])
       {
           s.erase(i-1,2);
           if(i!=1)
           {
               i--;
           }
       }
       else {
       {
           i++;
       }
       }
   }
   if(s=="") return "Empty String";
   return s;
}