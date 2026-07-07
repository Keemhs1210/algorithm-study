// 백준 2884 - 알람 시계 (Bronze 3)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t H = 0;
    int32_t M = 0;
    int32_t iWake_H = 0;
    int32_t iWake_M = 0;

    cin >> H >> M;
    iWake_H = H;
    iWake_M = M - 45;

    if (iWake_M < 0)
    {
        iWake_M += 60;
        iWake_H--;
        if (iWake_H < 0)
        {
            iWake_H += 24;
        }
    }

    cout << iWake_H << " "<< iWake_M << "\n";
    return 0;
}
