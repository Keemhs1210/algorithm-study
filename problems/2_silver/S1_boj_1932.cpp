// 백준 1932 - 정수 삼각형 (Silver 1)
// https://www.acmicpc.net/problem/1932
#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 501;
int32_t aiArr[MAX_NUM_ARR][MAX_NUM_ARR];
int32_t aiDP[MAX_NUM_ARR] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int32_t N = 0;
    cin >> N;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iTemp = 0;
        
        for(int32_t iIdxJ = 0; iIdxJ <= iIdxI; iIdxJ++)
        {
            cin >> iTemp;
            aiArr[iIdxI][iIdxJ] = iTemp;
        }
    }

    for(int32_t iIdxJ = 0; iIdxJ < N; iIdxJ++)
    {
        aiDP[iIdxJ] = aiArr[N-1][iIdxJ];
    }

    for(int32_t iIdxI = N - 2; iIdxI >= 0; iIdxI--)
    {
        for(int32_t iIdxJ = 0; iIdxJ <= iIdxI; iIdxJ++)
        {
            aiDP[iIdxJ] = aiArr[iIdxI][iIdxJ] + max(aiDP[iIdxJ], aiDP[iIdxJ + 1]);
        }
    }

    cout << aiDP[0];

    return 0;
}
