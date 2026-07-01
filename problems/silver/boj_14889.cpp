// 백준 14889 - 스타트와 링크 (Silver 1)
// https://www.acmicpc.net/problem/14889
//
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 20;
int32_t aiTeam[MAX_NUM_ARR][MAX_NUM_ARR] = {0};
int32_t aiVisited[MAX_NUM_ARR] = {0};
int32_t N = 0;
int32_t iMin_Score = INT_MAX;

void CalculateSocre()
{
    int32_t iStart_Score = 0;
    int32_t iLink_Score = 0;
    int32_t iTotScore = 0;
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        for (int32_t iIdxJ = iIdxI + 1; iIdxJ < N; iIdxJ++)
        {
            if (aiVisited[iIdxI] == 1 && aiVisited[iIdxJ] == 1)
            {
                iStart_Score += aiTeam[iIdxI][iIdxJ] + aiTeam[iIdxJ][iIdxI];
            }
            else if (aiVisited[iIdxI] == 0 && aiVisited[iIdxJ] == 0)
            {
                iLink_Score += aiTeam[iIdxI][iIdxJ] + aiTeam[iIdxJ][iIdxI];
            }
        }
    }
    iTotScore = abs(iStart_Score - iLink_Score);
    iMin_Score = min(iMin_Score, iTotScore);

    return;
}
void BackTracking(int32_t iCurr, int32_t iCnt)
{
    if (iCnt == N / 2) // 팀 다 구했으면
    {
        // Calculate Score
        CalculateSocre();
        return;
    }
    if (iCurr == N)
    {
        return;
    }

    for (int32_t iIdxI = iCurr; iIdxI < N; iIdxI++)
    {
        aiVisited[iIdxI] = 1;
        BackTracking(iIdxI + 1, iCnt + 1);
        aiVisited[iIdxI] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        for (int32_t iIdxJ = 0; iIdxJ < N; iIdxJ++)
        {
            cin >> aiTeam[iIdxI][iIdxJ];
        }
    }
    // Start Team 구성 - BackTracking 한 번 호출로 모든 조합 탐색
    BackTracking(0, 0);

    cout << iMin_Score;
    return 0;
}
