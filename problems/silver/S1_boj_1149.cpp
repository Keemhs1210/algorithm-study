// 백준 1149 - RGB거리 (Silver 1)
// https://www.acmicpc.net/problem/1149
//
#include <bits/stdc++.h>
using namespace std;

int32_t N = 0;
constexpr int32_t MAX_NUM_ARR = 1001;
int32_t aiHome[MAX_NUM_ARR][3] = {0};
int32_t aiDP[MAX_NUM_ARR][3] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        cin >> aiHome[iIdxI][0] >> aiHome[iIdxI][1] >> aiHome[iIdxI][2];
    }
    for(int32_t iIdxI = 0; iIdxI < 3; iIdxI++)
    {
        aiDP[0][iIdxI] = aiHome[0][iIdxI];
    }
    for(int32_t iIdxI = 1; iIdxI < N; iIdxI++)
    {
        aiDP[iIdxI][0] = aiHome[iIdxI][0] + min(aiDP[iIdxI -1][1], aiDP[iIdxI-1][2]); 
        aiDP[iIdxI][1] = aiHome[iIdxI][1] + min(aiDP[iIdxI -1][0], aiDP[iIdxI-1][2]);
        aiDP[iIdxI][2] = aiHome[iIdxI][2] + min(aiDP[iIdxI -1][0], aiDP[iIdxI-1][1]);
    }

    cout << min({aiDP[N - 1][0], aiDP[N - 1][1], aiDP[N - 1][2]});
    return 0;
}
