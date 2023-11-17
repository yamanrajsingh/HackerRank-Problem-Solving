vector<int> icecreamParlor(int m, vector<int> arr) {
  int n=arr.size();
  unordered_map<int, int>mp;
  int curr;
  for(int i=0;i<n;i++)
  {
      curr=m-arr[i];
      if(mp.find(curr)!=mp.end())
      {
          return {mp[curr]+1,i+1};
      }
      mp[arr[i]]=i;
  }
  return {-1,-1};
  
}