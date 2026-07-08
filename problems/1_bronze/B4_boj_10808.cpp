// 백준 10808 - 알파벳 개수 (Bronze 4)
// https://www.acmicpc.net/problem/10808

#include <bits/stdc++.h>
using namespace std;

constexpr int32_t MAX_NUM_ARR = 26;
int32_t aiArr[MAX_NUM_ARR] = {0};
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;

    for(auto& s : str)
    {
        aiArr[s - 'a']++;
    }

    for(int32_t iIdxI = 0; iIdxI < MAX_NUM_ARR; iIdxI++)
    {
        cout << aiArr[iIdxI] << " ";
    }

    return 0;
}
