// first approach 
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i=digits.size()-1; i>=0; i--){
           
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i] = 0;
            }
            
        }
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};

// second approach smilar but easy to understand  
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i]++;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

// third approach also good but it not handle some test cases like 9
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n-1]++;
        return digits;
    }
};

