// 백준 2839 - 설탕 배달 (Silver 4)
// https://www.acmicpc.net/problem/2839
//

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t iNumArr = 5001;
constexpr int32_t INF = 100000000;
int32_t aiArr[iNumArr] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int32_t N;
    cin >> N;
    fill(aiArr, aiArr + (N + 1), INF);
    aiArr[0] = 0;

    for (int32_t iIdxI = 1; iIdxI <= N; iIdxI++)
    {
        if (iIdxI >= 3 && aiArr[iIdxI - 3] != INF)
        {
            aiArr[iIdxI] = min(aiArr[iIdxI], aiArr[iIdxI - 3] + 1);
        }
        if (iIdxI >= 5 && aiArr[iIdxI - 5] != INF)
        {
            aiArr[iIdxI] = min(aiArr[iIdxI], aiArr[iIdxI - 5] + 1);
        }
    }
    if (aiArr[N] == INF)
    {
        cout << "-1";
    }
    else
    {
        cout << aiArr[N] << "\n";
    }
    return 0;
}