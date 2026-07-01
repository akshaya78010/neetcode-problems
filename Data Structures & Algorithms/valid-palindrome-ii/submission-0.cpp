class Solution {
public:
    bool is_palindrome(string str,int i,int j){
        bool flag = true;

        while(i < j){
            if(str[i] != str[j]){
                flag = false;
                break;
            }
            i+=1;
            j-=1;
        }

        return flag;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j){
            if(s[i] != s[j]){
                return is_palindrome(s,i+1,j) || is_palindrome(s,i,j-1);
            }

            i+=1;
            j-=1;
        }

        return true;
    }
};