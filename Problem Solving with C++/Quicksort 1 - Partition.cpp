vector<int> quickSort(vector<int> arr) {
vector<int>ans;
int n=arr.size();
int p=arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]<p)
    {
      ans.push_back(arr[i]);
    }
}
ans.push_back(p);
for(int i=1;i<n;i++)
{
    if(arr[i]>p)
    {
      ans.push_back(arr[i]);
    }
}
return ans;
}