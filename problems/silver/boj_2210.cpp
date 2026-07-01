// 백준 2210 - 숫자판 점프 (Silver 2)
// https://www.acmicpc.net/problem/2210
//
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAP_SIZE = 5;
int32_t aiMap[MAP_SIZE][MAP_SIZE] = {0};
int32_t aiVisited[MAP_SIZE][MAP_SIZE] = {0};
int32_t aiDir[2][4] = {{-1, 1, 0, 0}, {0, 0, -1, 1}};
set<int32_t> setNum;
void DFS(int32_t iX, int32_t iY, int32_t iDepth, int32_t iNum)
{
    if (iDepth == 6)
    {
        setNum.insert(iNum);
        return;
    }

    for (int32_t iIdxI = 0; iIdxI < 4; iIdxI++)
    {
        int32_t iNextX = iX + aiDir[0][iIdxI];
        int32_t iNextY = iY + aiDir[1][iIdxI];
        if (iNextX < 0 || iNextX >= MAP_SIZE || iNextY < 0 || iNextY >= MAP_SIZE)
        {
            continue;
        }

        DFS(iNextX, iNextY, iDepth + 1, iNum * 10 + aiMap[iNextX][iNextY]);
    }

    return;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    for (int32_t iIdxI = 0; iIdxI < MAP_SIZE; iIdxI++)
    {
        for (int32_t iIdxJ = 0; iIdxJ < MAP_SIZE; iIdxJ++)
        {
            cin >> aiMap[iIdxI][iIdxJ];
        }
    }

    for (int32_t iIdxI = 0; iIdxI < MAP_SIZE; iIdxI++)
    {
        for (int32_t iIdxJ = 0; iIdxJ < MAP_SIZE; iIdxJ++)
        {
            DFS(iIdxI, iIdxJ, 1, aiMap[iIdxI][iIdxJ]);
        }
    }

    cout << setNum.size();
    return 0;
}