int makingAnagrams(string s1, string s2) {
unordered_map<char,int>mp;
for(auto it:s1)
{
    mp[it]++;
}
for(auto it:s2)
{
     mp[it]--;
}
int count=0;
for(auto it:mp)
{
    
        count+=abs(it.second);
}
return count;
}