// 백준 11650 - 좌표 정렬하기 (Silver 3)
// https://www.acmicpc.net/problem/11650
#include <bits/stdc++.h>
using namespace std;

int32_t Compare(pair<int32_t, int32_t> A, pair<int32_t, int32_t> B)
{
    if (A.first != B.first)
    {
        return A.first < B.first;
    }
    return A.second < B.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;
    vector<pair<int32_t, int32_t>> vPos;
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iX = 0;
        int32_t iY = 0;
        cin >> iX >> iY;
        vPos.push_back({iX, iY});
    }

    sort(vPos.begin(), vPos.end(), Compare);
    for (auto &pos : vPos)
    {
        cout << pos.first << ' ' << pos.second << "\n";
    }
    return 0;
}
