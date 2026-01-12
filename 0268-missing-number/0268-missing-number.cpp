class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();    
        int c;    
        for(int i = 0;i <= n;i++){
            c = 0;
            for(int j = 0 ; j< n ;j++){
                if(nums[j] == i){
                    c = 1;
                    break; 
                }
            }
            if(c == 0){
                return i;
            }
        }
        return -1;
    }
};