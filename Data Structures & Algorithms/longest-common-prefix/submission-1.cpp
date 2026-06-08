class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string res = strs[0];
        for(int i = 1; i < strs.size() ; i++){
        string temp1 = res;
        string temp2 = strs[i];
        string result = "";

        int min_length = min(temp1.size(),temp2.size());

        for(int i =0; i < min_length ; i++){
            if(temp1[i] == temp2[i]){
                result += temp1[i];
            }
            else{
                break;
            }
        }    

        res = result;
        }

        return res;
    }
};