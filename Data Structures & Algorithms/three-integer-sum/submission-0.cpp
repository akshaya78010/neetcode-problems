class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin() , nums.end());
        int sumi = 0;
        int i = 1;
        int j = nums.size() - 1;

        vector<vector<int>>res;

        for(int x = 0; x < nums.size() ; x++){
            i = x+1;
            j = nums.size()-1;

            if(x > 0 && nums[x] == nums[x-1]){
                continue;
            }
            
            while(i < j){
            sumi = nums[x] + nums[i] + nums[j];
            if(sumi == 0){
                res.push_back({nums[x],nums[i],nums[j]});
                i+=1;
                j-=1;

                
                while(i < j && nums[i] == nums[i-1]){i+=1;}
                while(i < j && nums[j] == nums[j+1]){j-=1;}
            }
            else if(sumi < 0){
                i+=1;
            }
            else if(sumi > 0){
                j-=1;
            }
        }
        }

        return res;
    }
};
