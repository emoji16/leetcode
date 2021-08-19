/*
 * @lc app=leetcode.cn id=474 lang=cpp
 *
 * [474] 一和零
 */

// @lc code=start
class Solution {
public:

    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<int> chars;
        for(const string& str:strs){
            int a = 0,b = 0;
            for(const char& ch: str){
                if(ch == '0') ++a;
                else ++b;
            }
            chars.emplace_back(110*a+b);
        }
        vector<int> dp(m*110+n+1);
        for(int i = 0;i < chars.size();++i){
            for(int j = m;j >= chars[i]/110;--j){
                for(int k = n;k >= chars[i]%110;--k){
                    dp[110*j+k] = max(dp[110*j+k],dp[110*j+k-chars[i]]+1);
                }
            }
        }
        return dp[110*m+n];
    }
};
//["1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101","1101","0101"]\n100\n100

// @lc code=end

