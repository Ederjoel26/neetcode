// time: O(m∗nlogn)
// space: O(m∗n)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string, vector<string>> hash;

      for (string& s: strs) {
        string key = s;                 
        sort(key.begin(), key.end());
        hash[key].push_back(s);
      }
              
      vector<vector<string>> r;
      for (auto& pair: hash) r.push_back(pair.second);

      return r;
    }
};

// time: O(m∗n)
// space: O(m) || O(m∗n).
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};
