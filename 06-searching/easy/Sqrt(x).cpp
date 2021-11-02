

// 69. sqrt(x)...
// concept used : binary search...

class Solution {
 public:
  int mySqrt(int x) {
    unsigned l = 1;
    unsigned r = x + 1u;

    while (l < r) {
      const unsigned m = l + (r - l) / 2;
      if (m > x / m)
        r = m;
      else
        l = m + 1;
    }
    return l - 1;
  }
};