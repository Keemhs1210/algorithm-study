// 백준 14888 - 연산자 끼워넣기 (Silver 1)
// https://www.acmicpc.net/problem/14888
#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 12;

int32_t N = 0;
int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t aiOp[4] = {0};
int32_t iMax = INT_MIN;
int32_t iMin = INT_MAX;

void DFS(int32_t iCurrIdx, int32_t iCurrVal)
{

    if (iCurrIdx == N) // base flag
    {
        iMax = max(iMax, iCurrVal);
        iMin = min(iMin, iCurrVal);
        return;
    }

    for (int32_t iIdxI = 0; iIdxI < 4; iIdxI++)
    {
        if (aiOp[iIdxI] <= 0)
        {
            continue;
        }
        aiOp[iIdxI]--;
        int32_t iNextVal = 0;
        if (iIdxI == 0) // plus
        {
            iNextVal = iCurrVal + aiArr[iCurrIdx];
        }
        else if (iIdxI == 1) // minus
        {
            iNextVal = iCurrVal - aiArr[iCurrIdx];
        }
        else if (iIdxI == 2) // multiply
        {
            iNextVal = iCurrVal * aiArr[iCurrIdx];
        }
        else if (iIdxI == 3) // divide
        {
            iNextVal = iCurrVal / aiArr[iCurrIdx];
        }
        DFS(iCurrIdx + 1, iNextVal);
        aiOp[iIdxI]++;
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
        cin >> aiArr[iIdxI];
    }
    for (int32_t iIdxI = 0; iIdxI < 4; iIdxI++)
    {
        cin >> aiOp[iIdxI];
    }
    DFS(1, aiArr[0]);
    cout << iMax << "\n"
         << iMin << "\n";
    return 0;
}
