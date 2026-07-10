// 백준 2828 - 사과 담기 게임 (Silver 5)
// https://www.acmicpc.net/problem/2828

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    int32_t M = 0;
    int32_t J = 0;
    int32_t iMove = 0;
    cin >> N >> M;
    cin >> J;

    int32_t iLeft = 1;
    int32_t iRight = M;
    while (J--)
    {
        int32_t iApple = 0;
        int32_t iDist = 0;
        cin >> iApple;

        if(iApple < iLeft) //왼쪽 이동
        {
            iDist = iLeft - iApple;
            iMove += iDist;
            iLeft -= iDist;
            iRight -= iDist;
        }
        else if(iApple > iRight) //오른쪽 이동
        {
            iDist = iApple - iRight;
            iMove += iDist;
            iLeft += iDist;
            iRight += iDist;
        }
    }

    cout << iMove;
    return 0;
}
