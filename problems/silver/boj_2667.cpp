// 백준 2667 - 단지번호붙이기 (Silver 1)
// https://www.acmicpc.net/problem/2667
#include <bits/stdc++.h>
#define MAX_NUM_ARR 26
using namespace std;

int32_t N = 0;
int32_t aiDir[2][4] = {{0, 0, -1, 1}, {1, -1, 0, 0}};
int32_t aiArr[MAX_NUM_ARR][MAX_NUM_ARR] = {0};
int32_t aiVisited[MAX_NUM_ARR][MAX_NUM_ARR] = {0};

int32_t DFS(int32_t iX, int32_t iY)
{
    aiVisited[iX][iY] = 1;  
    int32_t iCnt = 1;
    
    for(int32_t iIdxI = 0; iIdxI < 4; iIdxI++)
    {
        int32_t iNextX = iX + aiDir[0][iIdxI];
        int32_t iNextY = iY + aiDir[1][iIdxI];
        if(iNextX < 0 || iNextX >= N || iNextY < 0 || iNextY >= N)
        {
            continue;
        }

        if(aiVisited[iNextX][iNextY] == 1 || aiArr[iNextX][iNextY] == 0)
        {
            continue;
        }
        iCnt += DFS(iNextX, iNextY);
    }

    return iCnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin >> N;

    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        string str;
        cin >> str;
        for(int32_t iIdxJ = 0; iIdxJ < str.size(); iIdxJ++)
        {
            int32_t iTemp = str[iIdxJ] - '0';
            aiArr[iIdxI][iIdxJ] = iTemp;
        }
    }

    int32_t iTotal = 0;
    vector<int32_t> vCnt;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        for(int32_t iIdxJ = 0; iIdxJ < N; iIdxJ++)
        {
            int32_t iCnt = 0;
            if(aiVisited[iIdxI][iIdxJ] != 0 || aiArr[iIdxI][iIdxJ] == 0)
            {
                continue;
            }
            iCnt = DFS(iIdxI, iIdxJ);
            vCnt.push_back(iCnt);
            iTotal++;
        }
    }

    cout << iTotal << "\n";
    sort(vCnt.begin(), vCnt.end());
    for(auto& v : vCnt)
    {
        cout << v << "\n";
    }
    return 0;
}
