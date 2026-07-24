class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

     int county =0;
     int n = nums.size();

     for(int i =0; i < n ; i++){
        if(nums[i] == 0){
            county += 1;
        }
     }

     if(county == 0){
        int total = 1;

        for(int i =0 ; i < n ; i++){
            total *= nums[i];
        }

        for(int i =0; i < n ; i++){
            nums[i] = total/nums[i];
        }
     }
     else if(county == 1){
        int total = 1;

        for(int i =0 ; i < n ; i++){
            if(nums[i] != 0){
            total *= nums[i];
            }
        }

        for(int i =0; i < n ; i++){
            if(nums[i] != 0){
            nums[i] = 0;
            }
            else if(nums[i] == 0){
                nums[i] = total;
            }
        }
     }
     else if(county > 1){
        for(int i = 0; i < n ; i++){
            nums[i] = 0;
        }
     }

     return nums;
    }
};