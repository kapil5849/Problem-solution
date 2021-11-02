
// 852. Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int r=arr.size()-1;
        while(l<r){
            const int mid=l+(r-l)/2;
            if(arr[mid]<arr[mid+1])
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
