class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0 , high = arr.size() - 1;
        while(low < high){
            int mid = (high - low)/2 + low;
            if(arr[mid] < arr[mid+1]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return high;
    }
};
