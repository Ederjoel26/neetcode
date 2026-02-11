
// time: O(n log n)
// space: 0(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
      if (s.size() != t.size()) return false;

      sort(s.begin(), s.end());
      sort(t.begin(), t.end());

      for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[i]) return false;
      }

      return true;
    }
};


// time: O(n)
// space O(1)
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

