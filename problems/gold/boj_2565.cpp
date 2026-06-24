// 백준 2565 - 전깃줄 (Gold 5)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/2565
//
// LIS 응용. "없애야 하는 최소 전깃줄 수" = 전체 - (안 겹치는 최대 전깃줄 수).
// 핵심:
//   - 전깃줄을 A쪽 위치 기준 오름차순 정렬.
//   - 그 순서에서 B쪽 위치들의 LIS 길이 = 서로 교차하지 않는 최대 줄 수.
//   - 답 = N - LIS길이.
//   - N<=100 → O(N^2) DP면 충분.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://velog.io/@junttang/BOJ-2565-%EC%A0%84%EA%B9%83%EC%A4%84-%ED%95%B4%EA%B2%B0-%EC%A0%84%EB%9E%B5

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
