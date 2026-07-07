// 백준 1003 - 피보나치 함수 (Silver 3)
// https://www.acmicpc.net/problem/1003
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 41;
int32_t aiDP[MAX_NUM_ARR][2] = {0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int32_t T = 0;

    cin >> T;
    aiDP[0][0] = 1;
    aiDP[0][1] = 0;
    aiDP[1][0] = 0;
    aiDP[1][1] = 1;

    for (int32_t iIdxI = 2; iIdxI <= 40; iIdxI++)
    {
        aiDP[iIdxI][0] = aiDP[iIdxI - 1][0] + aiDP[iIdxI - 2][0];
        aiDP[iIdxI][1] = aiDP[iIdxI - 1][1] + aiDP[iIdxI - 2][1];
    }

    while (T--)
    {
        int32_t N = 0;
        cin >> N;
        cout << aiDP[N][0] << " " << aiDP[N][1] << "\n";
    }

    return 0;
}
