// 백준 1269 - 대칭 차집합 (Silver 4)
// https://www.acmicpc.net/problem/1269

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    int32_t M = 0;

    map<int32_t, int32_t> mp;
    cin >> N >> M;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t A = 0;
        cin >> A;
        mp[A] |= 1;
    }

    for(int32_t iIdxI = 0; iIdxI < M; iIdxI++)
    {
        int32_t B = 0;
        cin >> B;
        mp[B] |= 2;
    }

    int32_t iCount = 0;
    for(auto& kv : mp)
    {
        if(kv.second == 1 || kv.second == 2)
        {
            iCount++;
        }
    }

    cout << iCount;
    return 0;
}
