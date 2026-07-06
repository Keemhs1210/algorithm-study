// 백준 13305 -  (Silver 3)
// https://www.acmicpc.net/problem/13305
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_N = 100001;     // N 최대 100,000
int64_t aiDist[MAX_N] = {0};          // 도로 길이 (N-1개 사용)
int64_t aiPrice[MAX_N] = {0};         // 리터당 가격 (N개 사용)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;

    for (int32_t iIdxI = 0; iIdxI < N - 1; iIdxI++)
    {
        cin >> aiDist[iIdxI];
    }
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        cin >> aiPrice[iIdxI];
    }

    int64_t iMinPrice = aiPrice[0];
    int64_t iCost = 0;
    for (int32_t iIdxI = 0; iIdxI < N - 1; iIdxI++)      // 구간 i→i+1
    {
        if (aiPrice[iIdxI] < iMinPrice)
        {
            iMinPrice = aiPrice[iIdxI];       // 현재 도시까지 본 최저가 갱신
        }
        iCost += iMinPrice * aiDist[iIdxI];   // 이 구간은 최저가로 주유
    }

    cout << iCost;

    return 0;
}