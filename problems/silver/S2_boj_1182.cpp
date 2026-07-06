// 백준 1182 - 부분수열의 합 (Silver 2)
// https://www.acmicpc.net/problem/1182
//
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 21;

int32_t N = 0;
int32_t S = 0;
int32_t iCnt = 0;
int32_t aiArr[MAX_NUM_ARR] = {0};
vector<int32_t> vArr;

void CheckCondition()
{
    int32_t iSum = 0;
    for(auto& v: vArr)
    {
        iSum += v;
    }
    if(iSum == S)
    {
        iCnt++;
    }
    return;
}

void BackTracking(int32_t iCurr)
{
    if(iCurr == N)
    {
        CheckCondition();
        return;
    }
    //Check the S condition
    if(vArr.size() != 0)
    {
        CheckCondition();
    }

    for(int32_t iIdxI = iCurr; iIdxI < N; iIdxI++)
    {
        vArr.push_back(aiArr[iIdxI]);
        BackTracking(iIdxI + 1);
        vArr.pop_back();
    }
    return;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> S;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        cin >> aiArr[iIdxI];
    }

    BackTracking(0);

    cout << iCnt;
    return 0;
}