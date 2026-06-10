class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int county = 1;
        int max_county = nums[0];
        for(int i = 0; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                county += 1;
                if(county > (nums.size()/2)){
                    max_county = nums[i];
                    break;
                }
            }
            else{
                county = 1;
            }
        }
        return max_county;
    }
};