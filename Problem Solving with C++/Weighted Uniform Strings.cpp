vector<string> weightedUniformStrings(string s, vector<int> queries) {
 vector<int>v;
 vector<string>ans;
 int n=s.size();
 for(int i=0;i<n;i++)
 {
     int x=s[i]-'a'+1;
    v.push_back(x);
    while(i<n-1 && s[i]==s[i+1])
    {
        x+=s[i]-'a'+1;
        v.push_back(x);
        i++;
    }
 }
 sort(v.begin(),v.end());
 for(auto it:queries)
 {
     if(binary_search(v.begin(),v.end(),it))
     {
          ans.push_back("Yes");
     }
     else
     {
         ans.push_back("No");
     }
 }
return ans;
}