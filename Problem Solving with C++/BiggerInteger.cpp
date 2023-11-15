string biggerIsGreater(string w) {
      int wl=w.length();
    string t=w;
    int ptr=-1;
    for(int i=wl-2;i>=0;i--){
        if(w[i]<w[i+1]){
            ptr=i;
            break;
        }
    }
    if(ptr==-1){
        return "no answer";
    }
    int ptr1=-1;
    for(int i=wl-1;i>=0;i--){
        if(w[ptr]<w[i]){
            ptr1=i;
            break;
        }
    }
    swap(t[ptr],t[ptr1]);
    sort(t.begin()+ptr+1,t.end());
    return t;
}