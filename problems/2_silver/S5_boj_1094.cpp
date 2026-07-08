// 백준 1094 - 막대기 (Silver 5)
// https://www.acmicpc.net/problem/1094

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t X = 0;
    int32_t iCnt = 0;
    cin >> X;

    while(X > 0)
    {
        if(X % 2 == 1)
        {
            iCnt++;
        }
        X /= 2;
    }

    cout << iCnt;
    return 0;
}
