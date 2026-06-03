// 백준 2748 - 피보나치 수 2 (Bronze 1)
// https://www.acmicpc.net/problem/2748
//
// 목표: DP(타뷸레이션) 입문 + 오버플로 감각(N=90 이면 int 범위 초과 → long long)
//
// [점화식] f(0)=0, f(1)=1, f(n)=f(n-1)+f(n-2)
//   재귀로 풀면 지수 시간 → 배열에 저장하며 올라가는 bottom-up.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long dp[91];     // ⚠️ long long! (f(90)은 int 범위 초과)
    dp[0] = 0;
    if (n >= 1) dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        // TODO: dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << "\n";
    return 0;
}
