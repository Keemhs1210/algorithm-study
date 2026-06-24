// 백준 9251 - LCS (Gold 5)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/9251
//
// 2차원 DP의 정석 — 최장 공통 부분 수열(Longest Common Subsequence).
// 핵심 점화식 (dp[i][j] = s1[0..i], s2[0..j]의 LCS 길이):
//   if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
//   else                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//   답 = dp[len1][len2].  (1-based 인덱싱이 편함)
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://melonicedlatte.com/algorithm/2018/03/15/181550.html

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
