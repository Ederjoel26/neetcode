// Time: O(n)
// Space: O(1) - only 26 characters for lowercase letters
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        int freq[26] = {0};
        
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        
        for (int count : freq) {
            if (count != 0) return false;
        }
        
        return true;
    }
};