#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
unordered_map<char,int>m;
  for(auto it:s)
  {
      m[it]++;
  }
  unordered_map<int,int>f;
  for(auto it:m) f[it.second]++;
  if(f.size()==1) return "YES";
  else if(f.size()==2)
  {
      auto it=f.begin();
      int ch1=it->first;
      int c1=it->second;
      ++it;
      int ch2=it->first;
      int c2=it->second;
     if ((c1 == 1 && (ch1 - 1 == ch2 || ch1 == 1)) || (c2 == 1 && (ch2 - 1 == ch1 || ch2 == 1))) {
      return "YES";
      
  }
  }
  
  return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
