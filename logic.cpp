/*
Question: Longest Common Subsequence (LCS)
Given two strings s1 and s2, find the length of their longest common subsequence.
A subsequence is a sequence that appears in the same order, but not necessarily consecutively, in both strings.
You need to return the length of the LCS.
*/

#include <iostream>
#include <vector>

int longestCommonSubsequence(std::string s1, std::string s2) {
    int m = s1.length();
    int n = s2.length();
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main() {
    std::string s1 = "abcde";
    std::string s2 = "ace";

    int lcsLength = longestCommonSubsequence(s1, s2);
    std::cout << "Length of Longest Common Subsequence: " << lcsLength << std::endl;

    return 0;
}
