// 백준 14501 - 퇴사 (Silver 3)
// https://www.acmicpc.net/problem/14501
//
#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 17;
vector<pair<int32_t, int32_t>> v;
int32_t aiDP[MAX_NUM_ARR] = {0};
int32_t N = 0;

int32_t DFS(int32_t iDay)
{
    int32_t iProfit = 0;
    int32_t iTake = 0;
    int32_t iSkip = 0;
    int32_t iNextDay = 0;

    if (iDay > N) // 퇴사일 도달
    {
        return 0;
    }
    if (aiDP[iDay] != -1)
    {
        return aiDP[iDay];
    }

    iNextDay = iDay + 1;
    iSkip = DFS(iNextDay); // 오늘 상담 건너뛰기

    if (iDay + v[iDay].first - 1 <= N) // 오늘 상담
    {
        iNextDay = iDay + v[iDay].first;
        iProfit = v[iDay].second;
        iTake = iProfit + DFS(iNextDay);
    }
    aiDP[iDay] = max(iSkip, iTake);

    return aiDP[iDay];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    v.push_back({0, 0});
    for (int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        int32_t T = 0;
        int32_t P = 0;
        cin >> T >> P;
        v.push_back({T, P});
    }
    memset(aiDP, -1, sizeof(aiDP)); // 미방문 표시 
    int32_t iMaxCost = DFS(1);
    cout << iMaxCost << "\n";

    return 0;
}
