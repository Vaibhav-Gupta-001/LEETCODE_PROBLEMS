class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> greater;
        int count = 0;
        int number = 0;

        for(int n : nums){
            greater[n] = 1 + greater[n];
            if(greater[n] > count){
                number = n;
                count = greater[n];
            }
        }
        return number;
    }
};