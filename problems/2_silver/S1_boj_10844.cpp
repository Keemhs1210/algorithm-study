// 백준 10844 - 쉬운 계단 수 (Silver 1)
// https://www.acmicpc.net/problem/10844
//
// 상태: dp[i][d] = 길이 i, 마지막 자리가 d인 계단 수의 개수
// 점화식: dp[i][d] = dp[i-1][d-1] + dp[i-1][d+1]  (경계 d=0/9 주의)
// 답: sum(dp[N][0..9]) % MOD

#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_LEN = 101;      // N 최대 100 (+ 1-indexed 여유)
constexpr int64_t MOD = 1000000000;   // 10^9 (1e9+7 아님!)
int64_t aiDP[MAX_LEN][10] = {0};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;

    for(int32_t iIdxI = 1; iIdxI <= 9; iIdxI++)
    {
        aiDP[1][iIdxI] = 1;
    }
    aiDP[1][0] = 0;

    for(int32_t iIdxI = 2; iIdxI <= N; iIdxI++)
    {
        for(int32_t iIdxJ = 0; iIdxJ <= 9; iIdxJ++)
        {
            if(iIdxJ == 0)
            {
                aiDP[iIdxI][iIdxJ] = aiDP[iIdxI - 1][iIdxJ + 1] % MOD;
            }
            else if(iIdxJ == 9)
            {
                aiDP[iIdxI][iIdxJ] = aiDP[iIdxI - 1][iIdxJ - 1] % MOD;
            }
            else
            {
                aiDP[iIdxI][iIdxJ] = (aiDP[iIdxI - 1][iIdxJ - 1] + aiDP[iIdxI - 1][iIdxJ + 1]) % MOD;
            }
        }
    }

    int64_t iAnswer = 0;
    for(int32_t iIdxI = 0; iIdxI < 10; iIdxI++)
    {
        iAnswer += aiDP[N][iIdxI];
    }
    
    iAnswer %= MOD;

    cout << iAnswer;
 

    return 0;
}
