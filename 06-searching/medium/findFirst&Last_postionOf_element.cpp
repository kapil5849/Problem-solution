
// 34. Find First and Last Position of Element in Sorted Array


class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    int n=nums.size();
    const int st = firstIndex(nums, target);
    if (st == n || nums[st] != target)
      return {-1, -1};
    const int end = firstIndex(nums, target + 1) - 1;
    return {st, end};
  }

 private:
    int firstIndex(const vector<int>& A, int target) {
    return lower_bound(begin(A), end(A), target) - begin(A);
  }
};
