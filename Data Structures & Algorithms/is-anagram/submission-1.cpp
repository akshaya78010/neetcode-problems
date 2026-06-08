class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;

        map<char,int>mpp1;
        map<char,int>mpp2;

        for(int i =0; i <s.size() ; i++){
            mpp1[s[i]] += 1;
        }

        for(int i = 0; i < s.size() ; i++){
            mpp2[t[i]] += 1;
        }

        if(mpp1.size() != mpp2.size()) return false;

        for(auto it = mpp1.begin(),it1 = mpp2.begin() ; it != mpp1.end() && it1 != mpp2.end() ; it++,it1++){
            if(it->first != it1->first || it->second != it1->second){
                return false;
            }
        }

        return true;
    }
};
