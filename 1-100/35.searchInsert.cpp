//35.searchInsert
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len=nums.size();
        int l = 0;
        int r = len-1;
        // if(nums[len-1] <= target) return len-1; 
        while(l<=r){
            int mid = l +((r-l)>>1);
            if (nums[mid] >= target){
                r = mid-1;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};
