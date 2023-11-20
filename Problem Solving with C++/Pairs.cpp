int pairs(int k, vector<int> arr) {
unordered_map<int, int>m;
    int count = 0;
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] <= k){
            m[arr[i]]++;
        }else{
           if(m.find(arr[i]-k) != m.end()){
               count++;
           } 
           m[arr[i]]++;
        }
    }
    
    return count;
}