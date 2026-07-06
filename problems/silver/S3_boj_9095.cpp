// 백준 9095 - 1, 2, 3 더하기 (Silver 3)
// https://www.acmicpc.net/problem/9095
#include<bits/stdc++.h>
using namespace std;
int32_t iTotalCnt = 0;
void BackTracking(int32_t N)
{
    if(N == 0)
    {
        iTotalCnt++;
        return;
    }
    else if(N < 0)
    {
        return;
    }

    BackTracking(N - 1);
    BackTracking(N - 2);
    BackTracking(N - 3);
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int32_t T = 0;
    cin >> T;
    while(T--)
    {
        int32_t N = 0;
        cin >> N;
        BackTracking(N);
        cout << iTotalCnt << "\n";
        iTotalCnt = 0;
    }
    
    return 0;
}
