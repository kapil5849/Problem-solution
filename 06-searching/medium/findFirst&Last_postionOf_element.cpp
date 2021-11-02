
// 34. Find First and Last Position of Element in Sorted Array


class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    const int start = firstGreaterEqual(nums, target);
    if (start == nums.size() || nums[start] != target)
      return {-1, -1};
    const int end = firstGreaterEqual(nums, target + 1) - 1;
    return {start, end};
  }

 private:
    int firstGreaterEqual(const vector<int>& A, int target) {
    return lower_bound(begin(A), end(A), target) - begin(A);
  }
};
