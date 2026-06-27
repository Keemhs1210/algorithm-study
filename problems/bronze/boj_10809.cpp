// 백준 10809 - 알파벳 찾기 (Bronze 2)
// https://www.acmicpc.net/problem/10809
//

#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 26;
int32_t aiArr[MAX_NUM_ARR] = {0};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S;
    cin >> S;
    fill(aiArr, aiArr + MAX_NUM_ARR, -1);
    for(int32_t iIdxI = 0; iIdxI < (int32_t)(S.size()); iIdxI++)
    {
        int32_t iIdx = S[iIdxI] - 'a';
        if(aiArr[iIdx] == -1)
        {
            aiArr[iIdx] =  iIdxI;       
        }
    }

    for(int32_t iIdxI = 0; iIdxI < MAX_NUM_ARR; iIdxI++)
    {
        cout << aiArr[iIdxI] << " "; 
    }
   
    return 0;
}
