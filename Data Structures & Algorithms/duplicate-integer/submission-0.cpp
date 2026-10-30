class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool res = false;
        set<int> temp;
        for(int i: nums){
            temp.insert(i);
        }
        if (nums.size() == temp.size()) res = false;
        else res = true;
        return res;
    }
};