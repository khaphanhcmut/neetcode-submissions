class Solution {
public:
    int count(string p, char x){
        int c = 0;
        for (int i = 0; i<p.length(); i++){
            if (p[i] == x) c++;
        }
        return c;
    }
    bool isAnagram(string s, string t) {
        for (int i = 0 ; i < s.length() ; i++){
            return !(count(s,s[i]) != count(t,s[i]));
        }
    }
};
