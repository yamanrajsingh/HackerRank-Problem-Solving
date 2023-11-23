string twoStrings(string s1, string s2) {
unordered_set<char>a;
unordered_set<char>b;
for(auto it:s1)
{
    a.insert(it);
}
for(auto it:s2)
{
    b.insert(it);
}
for(auto it:b)
{
    if(a.find(it)!=a.end())
    {
        return "YES";
    }
}
return "NO";
}