class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size()==0) return false;
        vector<int> pos(1000000,0);
        vector<int> neg(1000000,0);
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] >= 0){
                pos[nums[i]] += 1;
                if (pos[nums[i]] >= 2) return true;
            }
            else{
                int x = -nums[i];
                neg[x-1] += 1;
                if (neg[x-1] >= 2) return true;
            }
        }
        return false;
    }
};