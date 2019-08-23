// This solution searches the RANGE of the array, not index. 
// O(nlogn)


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, r = nums.size()-1;
        while (l <= r) {
            int m = (l+r) / 2;
            int h = 0;
            int mcount = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == m) {
                    mcount++;
                } else if (nums[i] > m) h++;
            }
            if (mcount > 1) return m;
            else if (h > nums.size()-1-m) l = m+1;
            else r = m;
        }
        return -1;
    }
};
