// 백준 1931 - 회의실 배정 (Gold 5)
// https://www.acmicpc.net/problem/1931
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int32_t N = 0;
    cin >> N;
    vector<pair<int32_t, int32_t>> vMeat(N);
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iStart = 0;
        int32_t iEnd = 0;
        cin >> iStart >> iEnd;
        vMeat[iIdxI] = {iEnd, iStart};
    }
    sort(vMeat.begin(), vMeat.end());

    int32_t iCount = 0;
    int32_t iLastEnd = 0;

    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iEnd = vMeat[iIdxI].first;
        int32_t iStart = vMeat[iIdxI].second;
        if(iStart >= iLastEnd)
        {
            iCount++;
            iLastEnd = iEnd;
        }
    }

    cout << iCount;
    return 0;
}
