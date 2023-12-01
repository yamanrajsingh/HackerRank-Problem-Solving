int theLoveLetterMystery(string s) {
int len = s.size();
    int ret = 0;
    
    for (int i = 0, len2 = len >> 1; i < len2; i++) {
        if (s[i] != s[len-1-i]) {
            ret += abs(int(s[i] - int(s[len-1-i])));
        }
    }
    
    return ret;
}