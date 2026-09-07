class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return tolower(c);
        });
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalnum(c);
        }), s.end());
        int j=s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[j]){return false;}
            j--;
        }
        return true;
    }
};
