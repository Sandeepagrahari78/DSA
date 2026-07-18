class Solution {
  public:
    bool checkPalindrome(int i, string &s) {
        if (i >= s.size() / 2) {
            return true;
        }
    
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
        
        return checkPalindrome(i + 1, s);
    }
    
    bool isPalindrome(string s) {
        string cleaned = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {                   
                cleaned += tolower(s[i]);            
            }
        }
        
    
        return checkPalindrome(0, cleaned);
    }
};