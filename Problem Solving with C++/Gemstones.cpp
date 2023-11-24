int gemstones(vector<string> arr) {
    int n = arr.size();
    map<char, int> m;
    int count = 0;
    for(int i=0; i<n; i++){
        string str = arr[i];
        unordered_set<char>s;
        for(int j=0; j<str.length(); j++){
            s.insert(str[j]);
        }
        for(auto it: s){
            m[it]++;
            if(m[it]==n)
                count++;
        }
    }
    return count;
}