class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0 , high = letters.size()-1;
        char store = letters[0];
        while(low <= high){
            int mid = (high - low)/2 + low;
            if(letters[mid] > target){
                store = letters[mid];
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return store;
    }
};