//5. LPS

/*
let a,b be left and right ends of the substring.
OPT(a, b) = max_{0<=a<b,a<b<=str.length}{OPT(a-1,b), OPT(a,b-1)}
*/

// Dyanamic Solution

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        if (n==0 || n==1) return s;
        int max_len = 1;
        int begin = 0;
        for (int i =0; i < n; ++i) dp[i][i] = true;
        for (int L = 2; L <=n ; ++L){
            for (int i = 0; i < n ++i){
                int j = L +i - 1;
                if (j >= n) break;
                if (s[i] != s[j]) {
                    dp[i][j] = false;
                }else{
                    if(j-i<3) {
                        dp[i][j]=true;
                    }else{
                        dp[i][j] = dp[i+1][j-1];
                    }
                }
                if (dp[i][j] && j-i+1 > max_len){
                    max_len = j-i + 1;
                    begin = i;
                }
            }
        }
        return s.substr(begin, max_len);

    }
};
