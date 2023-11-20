string funnyString(string s) {
    vector<int>v1;
     vector<int>v2;
   for(int i=0;i<s.size();i++)
   {
       int temp=s[i];
       v1.push_back(temp);
   }
   reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
   {
       int temp=s[i];
       v2.push_back(temp);
   }
    vector<int>ans1;
    int n=v1.size();
   for(int i=0;i<n-1;i++)
   {
       int d=abs(v1[i]-v1[i+1]);
       ans1.push_back(d);
   }
   vector<int>ans2;
   for(int i=0;i<n-1;i++)
   {
       int d=abs(v2[i]-v2[i+1]);
       ans2.push_back(d);
   }
   if(ans1==ans2) return "Funny";
   return "Not Funny";
   
}