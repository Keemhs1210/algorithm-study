// 백준 2579 - 계단 오르기 (Silver 3)
// https://www.acmicpc.net/problem/2579
#include <bits/stdc++.h>
#define MAX_NUM_ARR 301

using namespace std;

int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t aiDP[MAX_NUM_ARR] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;
    for (int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        cin >> aiArr[iIdxI];
    }

    aiDP[0] = 0;
    aiDP[1] = aiArr[1];
    if (N >= 2)
    {
        aiDP[2] = aiArr[1] + aiArr[2];
    }

    for (int32_t iIdxI = 3; iIdxI <= N; iIdxI++)
    {
        aiDP[iIdxI] = aiArr[iIdxI] + max({
                                         aiDP[iIdxI - 3] + aiArr[iIdxI - 1],
                                         aiDP[iIdxI - 2]
                                     });
    }

    cout << aiDP[N];
    return 0;
}
