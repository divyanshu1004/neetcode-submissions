class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res;
        int n=2;
        while(n!=0){
            for(int i: nums){
                res.push_back(i);
            }
            n--;
        }
        return res;
    }
};