// 백준 2178 - 미로 탐색 (Silver 1)
// https://www.acmicpc.net/problem/2178

#include <bits/stdc++.h>
#define MAX_NUM_ARR 101
using namespace std;

int32_t N = 0;
int32_t M = 0;
int32_t aiDir[2][4] = {{0, 0, -1, 1}, {-1, 1, 0, 0}};
int32_t aiMap[MAX_NUM_ARR][MAX_NUM_ARR] = {0};
int32_t aiVisited[MAX_NUM_ARR][MAX_NUM_ARR] = {0};
queue<pair<int32_t, int32_t>> qPos;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    cin.ignore();
    string str;
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        getline(cin, str);
        for (int32_t iIdxJ = 0; iIdxJ < str.size(); iIdxJ++)
        {
            char s = str[iIdxJ];
            if (s == '1')
            {
                aiMap[iIdxI][iIdxJ] = 1;
            }
            else
            {
                aiMap[iIdxI][iIdxJ] = 0;
            }
        }
    }

    qPos.push({0, 0});
    aiVisited[0][0] = 1;
    while (qPos.empty() == 0)
    {
        int32_t iCurrX = qPos.front().first;
        int32_t iCurrY = qPos.front().second;
        qPos.pop();
        for (int32_t iIdxI = 0; iIdxI < 4; iIdxI++)
        {
            int32_t iNextX = iCurrX + aiDir[0][iIdxI];
            int32_t iNextY = iCurrY + aiDir[1][iIdxI];
            if (iNextX < 0 || iNextX >= N || iNextY < 0 || iNextY >= M)
            {
                continue;
            }
            if (aiVisited[iNextX][iNextY] == 1 || aiMap[iNextX][iNextY] == 0)
            {
                continue;
            }
            aiVisited[iNextX][iNextY] = 1;
            aiMap[iNextX][iNextY] = aiMap[iCurrX][iCurrY] + 1;
            qPos.push({iNextX, iNextY});
        }
    }
    cout << aiMap[N - 1][M - 1];

    return 0;
}
