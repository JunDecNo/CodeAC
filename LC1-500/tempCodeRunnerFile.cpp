class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty())return "";
        int slen = s.length();
        int left, right, maxLen=0, len, start = 0;
        for (int i = 0; i < slen; i++) {
            left = i - 1;
            right = i + 1;
            len = 1;
            while (left >= 0 && s[left] == s[i]) {
                len++;
                left--;
            }
            while (right < slen && s[right] == s[i]) {
                len++;
                right++;
            }
            while (right < slen && left >= 0 && s[left] == s[right]) {
                left--;
                right++;
                len = len + 2;
            }
            if (len > maxLen) {
                maxLen = len;
                start = left;
            }
        }
        return s.substr(start + 1, maxLen);
    }
};