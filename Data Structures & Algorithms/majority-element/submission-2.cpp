class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;

        //why bcoz if only one lements there like [7]
        int res = nums[0];

        for(int i =0; i < nums.size() ; i++){
            mpp[nums[i]] += 1;
            if(mpp[nums[i]] > nums.size()/2){
                res = nums[i];
                break;
            }
        }

        return res;
    }
};

// time complexity : O(n)
// space complexity: O(n)