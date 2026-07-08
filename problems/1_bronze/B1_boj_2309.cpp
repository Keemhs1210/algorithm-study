// 백준 2309 - 일곱 난쟁이 (Bronze 1)
// https://www.acmicpc.net/problem/2309

#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 10;
int32_t aiArr[MAX_NUM_ARR] = {0};
vector<int32_t> vPick;
int32_t iDone = 0;
void BackTracking(int32_t iCurr, int32_t iSum)
{
  
    if(iDone == 1)
    {
        return;
    }    
    if(vPick.size() == 7)
    {
        if(iSum == 100)
        {
            sort(vPick.begin(), vPick.end());
            for(auto& v : vPick)
            {
                cout << v << "\n";
            }
            iDone = 1;
        }
        return;
    }

    for(int32_t iIdxI = iCurr; iIdxI < 9; iIdxI++)
    {
        vPick.push_back(aiArr[iIdxI]);
        BackTracking(iIdxI + 1, iSum + aiArr[iIdxI]);
        vPick.pop_back();
    }




}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int32_t iIdxI = 0; iIdxI < 9; iIdxI++)
    {
        cin >> aiArr[iIdxI];
    }

    BackTracking(0, 0);


    return 0;
}
