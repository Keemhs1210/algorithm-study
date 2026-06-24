// 백준 10818 - 최솟값과 최댓값 (Bronze III)
// https://www.acmicpc.net/problem/10818
//
// 워밍업 목표: C++ 빠른 입출력 + 배열 순회로 min/max 재장착

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // TODO: 여기에 풀이 작성
    int32_t iMin = 1000001;
    int32_t iMax = -1000001;
    for(int32_t iIdxI = 0; iIdxI < n; iIdxI++) {
        int32_t iNum;
        cin >> iNum;
        if(iNum < iMin) {
            iMin = iNum;
        }
        if(iNum > iMax) {
            iMax = iNum;
        }
    }
    cout << iMin << ' ' << iMax;

    return 0;
}
