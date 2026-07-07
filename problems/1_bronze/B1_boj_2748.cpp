// 백준 2748 - 피보나치 수 2 (Bronze 1)
// https://www.acmicpc.net/problem/2748
//
// 목표: DP(타뷸레이션) 입문 + 오버플로 감각(N=90 이면 int 범위 초과 → long long)

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 100;
int64_t aiDP[MAX_NUM_ARR] = {0};
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int32_t N = 0;
    cin >> N;

    int64_t i64Answer = 0;

    aiDP[0] = 0;
    aiDP[1] = 1;

    for (int32_t iIdxI = 2; iIdxI <= N; iIdxI++)

    {
        aiDP[iIdxI] = aiDP[iIdxI - 1] + aiDP[iIdxI - 2];
    }
    i64Answer = aiDP[N];

    cout << i64Answer;
    return 0;
}
