// 백준 1159 - 농구 경기 (Bronze 2)
// https://www.acmicpc.net/problem/1159

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 26;
int32_t aiArr[MAX_NUM_ARR] = {0};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int32_t N = 0;

    cin >> N;

    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        string str;
        cin >> str;

        aiArr[str[0] - 'a']++;
    }

    int32_t iFlag = 0;
    for (int32_t iIdxI = 0; iIdxI < MAX_NUM_ARR; iIdxI++)
    {
        if (aiArr[iIdxI] >= 5)
        {
            iFlag = 1;
            char Output = 'a' + iIdxI;
            
            cout <<  Output;
        }
    }

    if (iFlag == 0)
    {
        cout << "PREDAJA";
    }

    return 0;
}
