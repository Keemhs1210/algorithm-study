// 백준 1920 - 수 찾기 (Silver 4)
// https://www.acmicpc.net/problem/1920
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 100001;

int32_t aiA[MAX_NUM_ARR] = {0};
int32_t aiB[MAX_NUM_ARR] = {0};
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int32_t N = 0;
    int32_t M = 0;
    cin >> N;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        cin >> aiA[iIdxI];
    }
    cin >> M;
    for(int32_t iIdxI = 0; iIdxI < M; iIdxI++)
    {
        cin >> aiB[iIdxI];
    }
    sort(aiA, aiA+N);
    for(int32_t iIdxI = 0; iIdxI < M; iIdxI++)
    {
        int32_t iTarget = aiB[iIdxI];
        int32_t iLow = 0;
        int32_t iHigh = N - 1;
        bool bFlag = false;
        while(iLow <= iHigh)
        {
            int32_t iMid = (iLow + iHigh) / 2;
            if(aiA[iMid] == iTarget)
            {
                bFlag = true;
                break;
            }
            else if(aiA[iMid] < iTarget)
            {
                iLow = iMid + 1;
            }
            else
            {
                iHigh = iMid - 1;
            }
        }
        if(bFlag == true)
        {
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
    return 0;
}
