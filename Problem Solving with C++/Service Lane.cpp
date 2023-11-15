vector<int> serviceLane(int n, vector<int>width,vector<vector<int>> cases) {
    vector<int> ans;
  for(int i=0;i<cases.size();i++)
  {
      int a=cases[i][0];
      int b=cases[i][1];
      int k=a;
      int mini=INT_MAX;
      while(k<=b)
      {
          mini=min(width[k],mini);
          k++;
      }
      ans.push_back(mini);
  }
  return ans;
}