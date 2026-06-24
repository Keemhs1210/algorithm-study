// 백준 2562 - 최댓값 (Bronze 3)
// https://www.acmicpc.net/problem/2562
//
// 목표: 배열에서 최댓값 + "그 값의 위치(1-based)" 동시에 추적
//
// [아이디어] 9개 수를 읽으며 max 와 maxIdx 를 함께 갱신.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int best = -1, bestIdx = -1;
    for (int i = 1; i <= 9; i++) {
        int x;
        cin >> x;
        // TODO: x > best 이면 best = x, bestIdx = i;  (위치는 1부터)
    }

    cout << best << "\n" << bestIdx << "\n";
    return 0;
}
