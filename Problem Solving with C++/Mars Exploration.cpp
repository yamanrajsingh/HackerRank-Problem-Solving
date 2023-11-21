int marsExploration(string s) {
 int n=s.size();
  n/=3;
  string comp="";
  for(int i=0;i<n;i++)
  {
      comp+="SOS";
  }
  int count=0;
   for(int i=0;i<comp.size();i++)
   {
       if(comp[i]!=s[i])
       {
           count++;
       }
   }
  return count;
}