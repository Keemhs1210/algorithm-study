// 백준 2562 - 최댓값 (Bronze 3)
// https://www.acmicpc.net/problem/2562

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    const int32_t N = 9;
    int32_t iMax = -1;
    int32_t iIdx = 0;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iTemp = 0;
        cin >> iTemp;
        if(iMax < iTemp)
        {
            iMax = iTemp;
            iIdx = iIdxI + 1;
        }
    }

    cout << iMax << "\n"<<iIdx;

    return 0;
}
