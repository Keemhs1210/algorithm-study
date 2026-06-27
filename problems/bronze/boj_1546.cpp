// 백준 1546 - 평균 (Bronze I)
// https://www.acmicpc.net/problem/1546
//
#include <bits/stdc++.h>
constexpr int32_t MAX_NUM_ARR = 1001;
using namespace std;

double adArr[MAX_NUM_ARR] = {0, };

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int32_t N = 0;
    cin >> N;
    double dMax = -1;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        cin >> adArr[iIdxI];
        if(adArr[iIdxI] > dMax)
        {
            dMax = adArr[iIdxI];
        }
    }

    double dSum = 0;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        adArr[iIdxI] = (double)(adArr[iIdxI] / dMax) * 100.0; 
        dSum += adArr[iIdxI];
    }
    dSum /= (double)N;
    printf("%lf", dSum);
    return 0;
}
