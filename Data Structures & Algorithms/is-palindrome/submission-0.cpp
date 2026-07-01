class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        bool flag = true;

        while(i < j){
            while(s[i] == ' ' || ispunct(s[i])){
                i+=1;
            }
            while(s[j] == ' ' || ispunct(s[j])){
                j-=1;
            }
            
            if(tolower(s[i]) != tolower(s[j])){
                flag = false;
                break;
            }
            i+=1;
            j-=1;
        }
        return flag;
    }
};
