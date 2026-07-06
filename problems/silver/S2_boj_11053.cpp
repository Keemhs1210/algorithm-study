// 백준 11053 - 가장 긴 증가하는 부분 수열 (Silver 2)
// https://www.acmicpc.net/problem/11053

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 1001;
int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t aiDP[MAX_NUM_ARR] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;
    for(int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        cin >> aiArr[iIdxI];
    }

    int32_t iAnswer = 0;
    for(int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        aiDP[iIdxI] = 1;
        for(int32_t iIdxJ = 1; iIdxJ < iIdxI; iIdxJ++)
        {
            if(aiArr[iIdxJ] < aiArr[iIdxI])
            {
                aiDP[iIdxI] = max(aiDP[iIdxI], aiDP[iIdxJ] + 1);
            }
        }
        iAnswer = max(iAnswer, aiDP[iIdxI]);
    }

    cout << iAnswer;
    return 0;
}
