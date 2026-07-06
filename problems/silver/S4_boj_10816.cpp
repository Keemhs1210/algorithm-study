// 백준 10816 - 숫자 카드 2 (Silver 4)
// https://www.acmicpc.net/problem/10816
#include <bits/stdc++.h>
using namespace std;
vector<int32_t> vA;

int32_t LowerBound(int32_t iTarget)
{
    int32_t iLow = 0;
    int32_t iHigh = (int32_t)vA.size();
    while(iLow < iHigh)
    {
        int32_t iMid = iLow + (iHigh - iLow) / 2;
        if(vA[iMid] < iTarget)
        {
            iLow = iMid + 1;
        }
        else
        {
            iHigh = iMid;
        }
    }
    return iLow;
}

int32_t UpperBound(int32_t iTarget)
{
    int32_t iLow = 0;
    int32_t iHigh = (int32_t)vA.size();

    while(iLow < iHigh)
    {
        int32_t iMid = iLow + (iHigh - iLow) / 2;
        if(vA[iMid] <= iTarget)
        {
            iLow = iMid + 1;
        }
        else
        {
            iHigh = iMid;
        }
    }
    return iLow;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int32_t N = 0;
    int32_t M = 0;

    cin >> N;
    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t A = 0;
        cin >> A;
        vA.push_back(A);
    }
    cin >> M;
     sort(vA.begin(), vA.end());


    for (int32_t iIdxI = 0; iIdxI < M; iIdxI++)
    {
        int32_t iTarget = 0;
        cin >> iTarget;
        int32_t iLowBound = LowerBound(iTarget);
        int32_t iUpperBound = UpperBound(iTarget);
        cout << (iUpperBound - iLowBound) << " ";
    }
   
  
 

    return 0;
}
