class Solution {
public:
    void merge(vector<int>&arr,int low,int mid,int high){
        int i = low;
        int j = mid + 1;

        vector<int>temp;

        while(i <= mid && j <= high){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
        }


        while(i <= mid){
            temp.push_back(arr[i++]);
        }

        while(j <= high){
            temp.push_back(arr[j++]);
        }

        for(int k = 0; k < temp.size() ; k++){
            arr[low + k] = temp[k];
        }

        return ;
    }
    void merge_sort(vector<int>&arr,int low,int high){
        if(low >= high) return;

        int mid = low + (high - low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size() - 1;

        merge_sort(nums,low,high);

        return nums;
    }
};