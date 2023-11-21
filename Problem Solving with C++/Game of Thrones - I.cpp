string gameOfThrones(string s) {
unordered_map<char, int>m;
int odd=0;
for(auto it:s)
{
    m[it]++;
}
for(auto it:m)
{
    if(it.second%2!=0)
    {
        odd++;
    }
}
if(odd>1) return "NO";
return "YES";
}