string hackerrankInString(string s) {
 string temp="hackerrank";
 int j=0;
 for(int i=0;i<s.size();i++)
 {
     if(temp[j]==s[i])
     {
         j++;
     }
 }
 if(j==10) return "YES";
 return "NO";
}