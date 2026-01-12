class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> pair_index;
        for(int i = 0 ; i < nums.size() ; i++){
            int num = nums[i];
            if(pair_index.find(target - num) != pair_index.end()){
                return {pair_index[target - num] , i};
            }
            pair_index[num] = i;
        }
        return {};
    }
};