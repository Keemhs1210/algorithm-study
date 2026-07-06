// 백준 1012 - 유기농 배추 (Silver 2)
// https://www.acmicpc.net/problem/1012

#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 51;
typedef struct POS_t
{
    int32_t iX;
    int32_t iY;
}POS;

int32_t T = 0;
int32_t M = 0;
int32_t N = 0;
int32_t K = 0;

POS stPos[MAX_NUM_ARR * MAX_NUM_ARR] = {0};
int32_t aiDir[2][4] = {{-1, 1, 0, 0},{0, 0, -1 , 1}};
int32_t aiMap[MAX_NUM_ARR][MAX_NUM_ARR] = {0};
bool aiVisited [MAX_NUM_ARR][MAX_NUM_ARR] = {0};

void DFS(int32_t iX, int32_t iY)
{
    aiVisited [iX][iY] = 1;

    for(int32_t iIdxI = 0; iIdxI < 4; iIdxI++)
    {
        int32_t iNextX = iX + aiDir[0][iIdxI];
        int32_t iNextY = iY + aiDir[1][iIdxI];
        if(iNextX < 0 || iNextX >= M || iNextY < 0 || iNextY >= N)
        {
            continue;
        }
        if(aiVisited [iNextX][iNextY] == 0 && aiMap[iNextX][iNextY] == 1)
        {
            DFS(iNextX, iNextY);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;

    while (T--)
    {

        memset(aiMap, 0, sizeof(aiMap));
        memset(aiVisited , 0, sizeof(aiVisited ));
        memset(stPos, 0, sizeof(stPos));
        int32_t iCnt = 0;
        int32_t iSize = 0;


        cin >> M >> N >> K;
        for (int32_t iIdxI = 0; iIdxI < K; iIdxI++)
        {
            int32_t iX = 0;
            int32_t iY = 0;
            cin >> iX >> iY;
            aiMap[iX][iY] = 1;
            stPos[iSize].iX = iX;
            stPos[iSize].iY = iY;
            iSize++;
        }

        for (int32_t iIdxI = 0; iIdxI < iSize; iIdxI++)
        {
            int32_t iX = stPos[iIdxI].iX;
            int32_t iY = stPos[iIdxI].iY;
            if (aiVisited [iX][iY] == 1)
            {
                continue;
            }
            DFS(iX, iY);
            iCnt++;
        }
        cout << iCnt << "\n";
    }

    return 0;
}
