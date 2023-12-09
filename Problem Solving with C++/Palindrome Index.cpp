 bool check(string a)
 {
     int n=a.size();
     int l=0;
     int r=n-1;
     while(l<=r)
     {
         if(a[l++]!=a[r--]) return false;
     }
      return true;
 }
int palindromeIndex(string s) {
    int n=s.size();
     int l=0;
     int r=n-1;
     while(l<r)
     {
         if(s[l]!=s[r]) break;
         l++;
         r--;
     }
          if(l>=r) return -1;
          string s1=s;
          string s2=s;
          s1.erase(s1.begin()+l);
          cout<<"pahli=="<<s1<<" ";
          if(check(s1)) return l;
          s2.erase(s2.begin()+r);
           cout<<"dusari=="<<s2<<" ";
          if(check(s2)) return r;
          return -1;
      }