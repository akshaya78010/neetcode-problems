class Solution {
public:
    int binary_search(int to_find,vector<int>arr,int low,int high){

        int i = low;
        int j = high;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;

            if(arr[mid] == to_find){
                return mid;
            }
            else if(arr[mid] < to_find){
                low = mid + 1;
            }
            else if(arr[mid] > to_find){
                high = mid - 1;
            }
        }

        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int>res;
        int res_ind = -1;
        for(int i =0; i < numbers.size() ; i++){
            int to_find = target - numbers[i];

            if(to_find > numbers[i]){
            res_ind = binary_search(to_find,numbers,i+1,numbers.size()-1);

             if(res_ind >= 0){
             res.push_back(i+1);
             res.push_back(res_ind+1);
             break;   
            }

            }
            else if(to_find <= numbers[i]){
                res_ind = binary_search(to_find,numbers,0,i-1);

                  if(res_ind >= 0){
                  res.push_back(res_ind+1);
                  res.push_back(i+1);
                  break;   
            }

            }
        }
         return res;
    }
};
