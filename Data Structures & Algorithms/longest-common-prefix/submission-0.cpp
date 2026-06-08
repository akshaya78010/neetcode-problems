class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string temp_str = "";
        map<string,int>mpp;
        for(int i =0; i < strs.size() ; i++){
            for(int j = 0 ;j < strs[i].size() ; j++){
                temp_str+=strs[i][j];
                mpp[temp_str] += 1;
            }
            temp_str = "";
        }

        string res;
        for(auto it = mpp.begin() ; it != mpp.end() ; it++){
            if(it->second == strs.size()){
                    if(res.size() < it->first.size()){
                        res = it->first;
                    }
            }
        }

        return res;
    }
};