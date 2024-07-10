class Solution {
public:
    string removeNonAlphanumericChars(const string& s) {
        std::string result = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                result += tolower(s[i]);
            }
        }
        return result;
    }
    bool isPalindrome(string s) {
        string ans = removeNonAlphanumericChars(s);
        int i = 0;
        int j = ans.length() - 1;
        while (i < j) {
            if (ans[i] != ans[j]) {
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};