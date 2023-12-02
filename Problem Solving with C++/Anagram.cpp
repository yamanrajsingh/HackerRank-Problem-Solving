int anagram(string s) {
    int n=s.size();
  if(n % 2 != 0) return -1;
    map<char, int> mp;
    int ans = 0;
    for(int i = 0; i <n/2; i++)
    {
         mp[s[i]]++;
    }
    
    for(int i = n / 2; i <n; i++){
        if(mp[s[i]] != 0)
        {
            mp[s[i]]--;
        } 
        else ans++;
    }
    return ans;
}
