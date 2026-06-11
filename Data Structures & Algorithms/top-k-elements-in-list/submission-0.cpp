class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mpp;
        vector<pair<int,int>>arr;
        
        for(int i =0; i < nums.size() ; i++){
            mpp[nums[i]] += 1;
        }

        for(auto it = mpp.begin() ; it != mpp.end() ; it++){
           arr.push_back({it->second,it->first});
        }

        sort(arr.rbegin(),arr.rend());
        nums.clear();
        for(int i = 0; i < k ; i++){
            nums.push_back(arr[i].second);
        }

        return nums;
    }
};
