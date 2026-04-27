class Solution {
public:
    int maxArea(vector<int>& heights) {
      int i = 0, j = heights.size() - 1;
      int max = 0;
      while (i < j) {
        int height = min(heights[i], heights[j]);
        int width = j - i;
        max = min(height * width, max);
        if (heights[i] > heights[j]) j--;
        else i++;
      }
      return max;
    }
};

