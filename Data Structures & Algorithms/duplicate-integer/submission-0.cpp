class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        map<int,int>mpp;

        for(int i =0; i < nums.size() ; i++){
            mpp[nums[i]]+=1;
        }

        for(auto it = mpp.begin() ; it != mpp.end() ; it++){
            if(it->second > 1){
                return true;
            }
        }
        return false;
    }
};