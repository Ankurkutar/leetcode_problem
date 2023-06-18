class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int original = x;
        long long reversed = 0;
        
        while (original > 0) {
            int temp = original % 10;
            reversed = reversed * 10 + temp;
            original = original / 10;
        }
        
        return reversed == x;
    }
};