// 백준 1463 - 1로 만들기 (Silver 3)
#include <bits/stdc++.h>
using namespace std;

int32_t X = 0;
constexpr int32_t MAX_NUM = 1000001;
int32_t aiDP[MAX_NUM] = {0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> X;

    aiDP[1] = 0;
    for(int32_t iCurr = 2; iCurr <= X; iCurr++)
    {
        aiDP[iCurr] = aiDP[iCurr - 1] + 1;
        if(iCurr % 2 == 0)
        {
            aiDP[iCurr] = min(aiDP[iCurr], aiDP[iCurr / 2] + 1);
        }
        if(iCurr % 3 == 0)
        {
            aiDP[iCurr] = min(aiDP[iCurr], aiDP[iCurr / 3] + 1);
        }
    }

    cout << aiDP[X];
    return 0;
}
