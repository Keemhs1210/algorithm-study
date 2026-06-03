// 백준 2110 - 공유기 설치 (Gold 4)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/2110
//
// 매개변수 탐색(Parametric Search)의 정석.
// "가장 인접한 두 공유기 사이 거리"의 최댓값을 이분탐색.
// 핵심:
//   1) 집 좌표 정렬.
//   2) 답 후보 = "최소 간격 d". lo=1, hi=(최대-최소).
//   3) 판정 함수 check(d): 첫 집부터 d 이상 떨어진 곳마다 공유기 설치 → 개수>=C 면 가능.
//   4) 가능하면 d를 더 키워본다(lo=mid+1, 정답 후보 갱신), 불가능하면 줄인다(hi=mid-1).
// ⚠️ 좌표가 아니라 "간격"을 탐색 대상으로 두는 것이 포인트.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://velog.io/@junttang/BOJ-2110-%EA%B3%B5%EC%9C%A0%EA%B8%B0-%EC%84%A4%EC%B9%98-%ED%95%B4%EA%B2%B0-%EC%A0%84%EB%9E%B5-C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
