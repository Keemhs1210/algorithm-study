// 백준 6603 - 로또 (Silver 2)
// https://www.acmicpc.net/problem/6603

#include <bits/stdc++.h>

using namespace std;

constexpr int32_t MAX_NUM_ARR = 50;
constexpr int32_t MAX_LENTH = 6;
int32_t N = 0;
int32_t aiArr[MAX_NUM_ARR] = {0};
vector<int32_t> vLotto;
void BackTracking(int32_t iCurr)
{
    if (vLotto.size() == MAX_LENTH)
    {
        for (int32_t iIdxI = 0; iIdxI < MAX_LENTH; iIdxI++)
        {
            cout << vLotto[iIdxI] << " ";
        }
        cout << "\n";
        return;
    }
    for (int32_t iIdxI = iCurr; iIdxI < N; iIdxI++)
    {
        vLotto.push_back(aiArr[iIdxI]);
        BackTracking(iIdxI + 1);
        vLotto.pop_back();
    }

    return;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1)
    {
        N = 0;
        cin >> N;
        if (N == 0)
        {
            break;
        }
        memset(aiArr, 0, sizeof(aiArr));
        vLotto.clear();
        for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
        {
            cin >> aiArr[iIdxI];
        }
        BackTracking(0);
        cout << "\n";
    }

    return 0;
}