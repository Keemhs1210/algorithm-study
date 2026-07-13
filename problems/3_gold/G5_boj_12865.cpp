// 백준 12865 - 평범한 배낭 (Gold 5)
// https://www.acmicpc.net/problem/12865
//
#include <bits/stdc++.h>
#define MAX_NUM_ARR 101
#define MAX_W 100001
using namespace std;

int32_t aiW[MAX_NUM_ARR] = {0};
int32_t aiV[MAX_NUM_ARR] = {0};
int32_t aiDP[MAX_NUM_ARR][MAX_W] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    int32_t K = 0;
    cin >> N >> K;

    for (int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        cin >> aiW[iIdxI] >> aiV[iIdxI];
    }

    for (int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        int32_t W = aiW[iIdxI];
        int32_t V = aiV[iIdxI];
        for (int32_t iIdxJ = 1; iIdxJ <= K; iIdxJ++)
        {
            if (iIdxJ - aiW[iIdxI] >= 0) // 넣을 수 있다면
            {
                aiDP[iIdxI][iIdxJ] = max(aiDP[iIdxI - 1][iIdxJ],          // 물건을 넣지 않는다
                                         aiDP[iIdxI - 1][iIdxJ - W] + V); // 물건을 넣는다
            }
            else
            {
                aiDP[iIdxI][iIdxJ] = aiDP[iIdxI - 1][iIdxJ];
            }
        }
    }

    cout << aiDP[N][K];
    return 0;
}
