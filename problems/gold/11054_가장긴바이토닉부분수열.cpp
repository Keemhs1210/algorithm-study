// 백준 11054 - 가장 긴 바이토닉 부분 수열 (Gold 4)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/11054
//
// LIS 응용. 바이토닉 = 증가하다가 감소(한쪽이 비어도 됨).
// 핵심:
//   - up[i]   = i로 끝나는 "왼→오 증가" LIS 길이
//   - down[i] = i에서 시작하는 "오→왼 증가" = 오른쪽으로 감소 LIS 길이
//   - 정점 i를 기준 → up[i] + down[i] - 1 의 최댓값.
//   - N<=1000 이라 O(N^2) DP로 충분.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://aerocode.net/262

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
