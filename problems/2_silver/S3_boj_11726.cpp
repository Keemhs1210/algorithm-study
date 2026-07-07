// 백준 11726 - 2×n 타일링 (Silver 3)
// https://www.acmicpc.net/problem/11726

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 1001;
int32_t aiDP[MAX_NUM_ARR] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;
    aiDP[0] = 0;
    aiDP[1] = 1;
    aiDP[2] = 2;

    for(int32_t iIdxI = 3; iIdxI <= N; iIdxI++)
    {
        aiDP[iIdxI] = (aiDP[iIdxI - 2] + aiDP[iIdxI - 1]) % 10007;
    }

    cout << aiDP[N] << "\n";

    return 0;
}
