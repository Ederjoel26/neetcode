// Time: O(n)
// Space: O(n)
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      unordered_set<int> s(nums.begin(), nums.end());
      return nums.size() > s.size();
    }
};


// Time: O(n log n)
// Space: O(1)
// class Solution {
// public:
//     bool hasDuplicate(vector<int>& nums) {
//       sort(nums.begin(), nums.end());
//       for (int i = 1; i < nums.size(); i++) {
//         if (nums[i - 1] == nums[i]) {
//           return true;
//         }
//       }
//       return false;
//     }
// };
