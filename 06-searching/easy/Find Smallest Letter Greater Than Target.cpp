
// 744. Find Smallest Letter Greater Than Target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size();

        while (l < r) {
        const int mid = l + (r - l) / 2;
        if (letters[mid] > target)
             r = mid;
        else
             l = mid + 1;
    }

    return letters[l % letters.size()];
    }
};
