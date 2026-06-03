// [DP] 백준 11726 - 2×n 타일링 (Silver III)
// https://www.acmicpc.net/problem/11726
//
// 개념: study_materials/07_DP.md  (피보나치형 점화식)
//
// 문제: 2×n 직사각형을 2×1, 1×2 타일로 채우는 경우의 수를 10007로 나눈 나머지.
// 입력: n (1 ≤ n ≤ 1000)
// 출력: 경우의 수 % 10007
//
// 상태 정의: dp[i] = 2×i 칸을 채우는 방법의 수
// 점화식 유도:
//   - 마지막을 세로 타일 1개로 채우면 → dp[i-1]
//   - 마지막을 가로 타일 2개(2×2 영역)로 채우면 → dp[i-2]
//   => dp[i] = dp[i-1] + dp[i-2]
// 초기값: dp[1]=1, dp[2]=2

#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> dp(max(n + 1, 3));

    dp[1] = 1;
    dp[2] = 2;

    // TODO 1: i = 3..n 까지 dp[i] = (dp[i-1] + dp[i-2]) % MOD
    //   주의: n이 1이면 위 dp[2] 접근이 안전하도록 vector 크기를 max(n+1,3)로 잡음

    cout << dp[n];
    return 0;
}
