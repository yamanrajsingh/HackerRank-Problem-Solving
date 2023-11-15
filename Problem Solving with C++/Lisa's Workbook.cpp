int workbook(int n, int k, vector<int> arr) {
 int page=1;
    int ans=0;
   for(int i=0;i<n;i++)
   {
      for(int j=1;j<=arr[i];j++) 
      {
          if(page==j) ans++;
          if(j%k==0 || j==arr[i]) page++;
      }
   }
   return ans;
}