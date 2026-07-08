// 백준 2979 - 트럭 주차 (Bronze 2)
// https://www.acmicpc.net/problem/2979

#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 105;
int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int32_t aiCost[3] = {0};

    for(int32_t iIdxI = 0; iIdxI < 3; iIdxI++)
    {
        cin >> aiCost[iIdxI];
    }

    int32_t iMin = INT_MAX;
    int32_t iMax = INT_MIN;

    for(int32_t iIdxI = 0; iIdxI < 3; iIdxI++)
    {
        int32_t iStart = 0;
        int32_t iEnd = 0;
        cin >> iStart >> iEnd;

        if(iMin > iStart)
        {
            iMin = iStart;
        }
        if(iMax < iEnd)
        {
            iMax = iEnd;
        }
        for(int32_t iIdxJ = iStart; iIdxJ < iEnd; iIdxJ++)
        {
            aiArr[iIdxJ]++;
        }
    }

    int32_t iCost = 0;
    for(int32_t iIdxI = iMin; iIdxI < iMax; iIdxI++)
    {
        if(aiArr[iIdxI] == 1)
        {
            iCost += aiCost[0];
        }
        else if(aiArr[iIdxI] == 2)
        {
            iCost += (aiCost[1] * 2);
        }
        else if(aiArr[iIdxI] == 3)
        {
            iCost += (aiCost[2] * 3);
        }
    }

    cout << iCost;
    return 0;
}
