
// 34. Find First and Last Position of Element in Sorted Array


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int st=findIndex(nums,target);
        if(st==n || nums[st]!=target){
             return {-1,-1};
        }
        int end=findIndex(nums,target+1)-1;
             return {st,end};
    }
    private:
    int findIndex(vector<int>& A,int target){
            return lower_bound(begin(A),end(A),target)-begin(A);
    }
};
