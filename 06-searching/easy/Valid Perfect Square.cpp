

// 367. Valid Perfect Square


class Solution {
public:
    bool isPerfectSquare(int num) {
        long l=1;
        long r=num;
        while(l<r){
            const long mid=l+(r-l)/2;
            if(mid>=num/mid)
                r=mid;
            else
                l=mid+1;
        }
        return l*l == num;
    }
};
