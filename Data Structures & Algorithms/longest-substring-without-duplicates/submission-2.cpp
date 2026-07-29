class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        int maxi = INT_MIN;
        map<int, int> mpp;
       mpp[s[0]] += 1;
        while (j < n) {
            if (mpp[s[j]] > 1) {
                while (mpp[s[j]] > 1) {
                    mpp[s[i]] -= 1;
                    i += 1;
                }
            } else {
                maxi = max(maxi, j - i + 1);
                j += 1;
                mpp[s[j]] += 1;
            }
        }

        if(maxi == INT_MIN) return 0;
        return maxi;
    }
};
