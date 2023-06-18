// in first approach TLE exceed 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            bool isSingle = true;
            for(int j=0; j<nums.size(); j++){
                if(i != j && nums[i] == nums[j]){
                    isSingle = false;
                    break;
                }
            }
            if (isSingle) {
                return nums[i];
            }
        }
        return -1;  // Handle case when single number not found
    }
};

// second approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;
              
        for(int i=0;i<nums.size();i++) {
            ans ^= nums[i];
        }

        return ans;

    }
};