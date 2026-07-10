// 백준 10709 - 기상캐스터 (Silver 5)
// https://www.acmicpc.net/problem/10709

#include <bits/stdc++.h>
#define MAX_NUM_ARR 101
using namespace std;

int32_t H = 0;
int32_t W = 0;
int32_t aiMap[MAX_NUM_ARR][MAX_NUM_ARR] = {0};
vector<pair<int32_t, int32_t>> vPos;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> H >> W;

    for (int32_t iIdxI = 0; iIdxI < H; iIdxI++)
    {
        for (int32_t iIdxJ = 0; iIdxJ < W; iIdxJ++)
        {
            char cTemp = 0;
            cin >> cTemp;
            if (cTemp == 'c')
            {
                aiMap[iIdxI][iIdxJ] = 0;
                vPos.push_back({iIdxI, iIdxJ});
            }
            else
            {
                aiMap[iIdxI][iIdxJ] = -1;
            }
        }
    }

    int32_t iTime = W;

    while (iTime--)
    {
        vector<pair<int32_t, int32_t>> vPosTmp;
        for (auto &p : vPos)
        {
            int32_t iH = p.first;
            int32_t iW = p.second;
            int32_t iNextW = p.second + 1;
            if (iNextW >= W || aiMap[iH][iNextW] == 0)
            {
                continue;
            }
            aiMap[iH][iNextW] = aiMap[iH][iW] + 1;
            vPosTmp.push_back({iH, iNextW});
        }
        vPos.clear();
        vPos = vPosTmp;
    }

    for (int32_t iIdxI = 0; iIdxI < H; iIdxI++)
    {
        for (int32_t iIdxJ = 0; iIdxJ < W; iIdxJ++)
        {

            cout << aiMap[iIdxI][iIdxJ] << " ";
        }
        cout << "\n";
    }

    return 0;
}
