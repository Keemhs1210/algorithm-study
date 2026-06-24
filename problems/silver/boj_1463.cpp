// 백준 1463 - 1로 만들기 (Silver 3)
// https://www.acmicpc.net/problem/1463
//
// 목표: DP 입문 — "최소 연산 횟수" 점화식
//
// [연산] x에 대해: /3(3의 배수일 때), /2(2의 배수일 때), -1
// [점화식] dp[i] = i를 1로 만드는 최소 연산 수
//   dp[1] = 0
//   dp[i] = dp[i-1] + 1
//   if (i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1)
//   if (i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1)
//   ⚠️ 그리디(큰 나눗셈 우선)는 반례 있음 → DP가 정석.

#include <bits/stdc++.h>
using namespace std;

int dp[1000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        // TODO: dp[i] = dp[i-1] + 1;
        // TODO: if (i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
        // TODO: if (i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
    }

    cout << dp[n] << "\n";
    return 0;
}
