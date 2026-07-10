// 백준 1436 - 영화감독 숌 (Silver 5)
// https://www.acmicpc.net/problem/1436

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;

    int32_t iCount = 0;
    int32_t iNum = 665;

    while(iCount < N)
    {
        iNum++;
        string str = to_string(iNum);
        if(str.find("666") != string::npos)
        {
            iCount++;
        }
    }
    cout << iNum;

    return 0;
}
