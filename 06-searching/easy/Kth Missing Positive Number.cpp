
// 1539. Kth Missing Positive Number

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int r=arr.size();
        while(l<r){
            const int mid=l+(r-l)/2;
            if(arr[mid]-(mid+1)>=k)
                r=mid;
            else
                l=mid+1;
        }
        return l+k;
    }
};
