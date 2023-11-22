string pangrams(string s) {
    transform(s.begin(),s.end(),s.begin(),::tolower);
unordered_map<char, int>mp;
for(auto it:s)
{
    mp[it]++;
}
for(char it='a';it<='z';it++)
{
    if(mp.find(it)==mp.end())
    {
        return "not pangram";
    }
}
return "pangram";
}