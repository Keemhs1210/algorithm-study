// 백준 2293 - 동전 1 (Gold 4)
// https://www.acmicpc.net/problem/2293

#include <bits/stdc++.h>
#define MAX_NUM_ARR 101
#define MAX_K 10001
using namespace std;

int32_t N = 0;
int32_t K = 0;
int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t aiDP[MAX_K] = {0};
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iTemp = 0;
        cin >> iTemp;
        aiArr[iIdxI] = iTemp;
    }

    aiDP[0] = 1;
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iCoin = aiArr[iIdxI];
        for (int32_t iIdxJ = iCoin; iIdxJ <= K; iIdxJ++)
        {
            aiDP[iIdxJ] += aiDP[iIdxJ - iCoin];
        }
    }

    cout << aiDP[K];

    return 0;
}
