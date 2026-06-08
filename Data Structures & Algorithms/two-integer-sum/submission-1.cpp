class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int>mpp;
        vector<int>res;

        for(int i =0; i < nums.size() ; i++){
            mpp[nums[i]] = i;
        }

        for(int i =0; i < nums.size() ; i++){
            int diff = target - nums[i];
            if(mpp.count(diff) && mpp[diff] != i){
                res.push_back(i);
                res.push_back(mpp[diff]);
                sort(res.begin(),res.end());
                break;
            }
        }
    return res;
    }
};
