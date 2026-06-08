class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>brr(nums.begin(),nums.end());

        nums.insert(nums.end(),brr.begin(),brr.end());

        return nums;
    }
};