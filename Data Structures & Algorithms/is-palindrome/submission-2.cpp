class Solution {
public:
    bool isPalindrome(string s) {
        string clean;
        for (char c: s) {
            if (isalnum(c)) clean += tolower(c);
        }

        string rev = clean;
        std::reverse(clean.begin(), clean.end());
        return clean == rev;
    }
};
