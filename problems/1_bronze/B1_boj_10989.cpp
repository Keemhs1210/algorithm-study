// 백준 10989 -  (Bronze 1)
// https://www.acmicpc.net/problem/10989
#include <bits/stdc++.h>
using namespace std;
constexpr int32_t MAX_NUM_ARR = 10001;
int32_t aiArr[MAX_NUM_ARR] = {0};
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int32_t N = 0;
    cin >> N;

    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iInput = 0;
        cin >> iInput;

        aiArr[iInput]++;
    }

    for(int32_t iIdxI = 1; iIdxI <= 10001; iIdxI++)
    {
        for(int32_t iIdxJ = 0; iIdxJ < aiArr[iIdxI]; iIdxJ++)
        {
            cout << iIdxI << "\n";
        }
    }

    return 0;
}
