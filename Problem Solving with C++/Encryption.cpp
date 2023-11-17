string encryption(string s) {
 s.erase(remove(s.begin(), s.end(), ' '), s.end());
 int n=s.size();
 int x=ceil(sqrt(n));
  string ans="";
 for(int i=0;i<x;i++)
 {
     string temp="";
     for(int j=i;j<n;j=j+x)
     {
         temp+=s[j];
     }
     ans+=temp+" ";
 }
 return ans;
}