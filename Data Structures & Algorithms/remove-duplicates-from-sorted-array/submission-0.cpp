class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int x =1 ;
  for(int i =0; i < nums.size()-1 ; i++){
    if(nums[i] != nums[i+1]){
        nums[x++] = nums[i+1];
    }
  }
    for(int i =0 ; i < nums.size() ; i++){
        cout<<nums[i]<<" ";
    }

    nums.erase(nums.begin()+x,nums.end());

    return nums.size();
    }
};