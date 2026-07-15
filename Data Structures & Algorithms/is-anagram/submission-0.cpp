class Solution {
public:
    bool isAnagram(string s, string t) {
        for (int i = 0 ; i < s.length() ; i++){
            int j = s.length() - i - 1;
            return !(s[i] != s[j]);
        }
    }
};
