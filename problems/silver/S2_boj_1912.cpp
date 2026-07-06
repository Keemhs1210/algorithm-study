// 백준 1912 - 연속합 (Silver 2)
// https://www.acmicpc.net/problem/1912
//

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 100001;

int32_t N = 0;
int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t aiDP[MAX_NUM_ARR] = {0};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    cin >> N;
    for(int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        cin >> aiArr[iIdxI];
    }

    aiDP[0] = 0;
    aiDP[1] = aiArr[1];
    int32_t iMax = aiDP[1];
    for(int32_t iIdxI = 2; iIdxI <= N; iIdxI++)
    {
        aiDP[iIdxI] = max(aiArr[iIdxI], aiDP[iIdxI - 1] + aiArr[iIdxI]);
        iMax = max(iMax, aiDP[iIdxI]);
    }

    cout << iMax;

    return 0;
}