class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v;
        int first_idx=-1;
        int last_idx=-1;
        for (int i =0 ; i<nums.size(); i++) {
            if(nums[i]==target && first_idx==-1) {
                first_idx=i;
                last_idx=i;
            }
            else if (nums[i]==target) {
                last_idx=i;
            }
        }
        v.push_back(first_idx);
        v.push_back(last_idx);
        return v;
    }
};