// 백준 2294 - 동전 2 (Gold 5)
// https://www.acmicpc.net/problem/2294

#include <bits/stdc++.h>
#define MAX_NUM_ARR 101
#define MAX_K 10001
using namespace std;
//DP 
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

    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        cin >> aiArr[iIdxI];
    }

    fill(aiDP, aiDP + K + 1, INT32_MAX);
    aiDP[0] = 0;
    for(int32_t iIdxI = 1; iIdxI <= K; iIdxI++)
    {
        for(int32_t iIdxJ = 0; iIdxJ < N; iIdxJ++)
        {
            int32_t iCoin = aiArr[iIdxJ];
            if(iIdxI >= iCoin && aiDP[iIdxI - iCoin] != INT32_MAX)
            {
                aiDP[iIdxI] = min(aiDP[iIdxI], aiDP[iIdxI - iCoin] + 1);
            }
        }
    }

    if(aiDP[K] == INT32_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << aiDP[K];
    }
    
    return 0;
}

// BackTracking
// int32_t N = 0;
// int32_t K = 0;
// int32_t g_iCnt = INT32_MAX;
// int32_t aiArr[MAX_NUM_ARR] = {0};

// void BackTracking(int32_t iCurr, int32_t iCnt, int32_t iSum)
// {
//     if (iSum > K)
//     {
//         return;
//     }

//     if (iSum == K)
//     {
//         if (iCnt < g_iCnt)
//         {
//             g_iCnt = iCnt;
//         }
//         return;
//     }

//     for (int32_t iIdxI = iCurr; iIdxI < N; iIdxI++)
//     {
//         BackTracking(iIdxI, iCnt + 1, iSum + aiArr[iIdxI]);
//     }
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> N >> K;

//     for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
//     {
//         int32_t iTemp = 0;
//         cin >> iTemp;

//         aiArr[iIdxI] = iTemp;
//     }

//     BackTracking(0, 0, 0);
//     if (g_iCnt == INT32_MAX)
//     {
//         cout << -1;
//     }
//     else
//     {
//         cout << g_iCnt;
//     }
//     return 0;
// }
