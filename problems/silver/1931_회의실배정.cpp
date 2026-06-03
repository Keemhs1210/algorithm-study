// 백준 1931 - 회의실 배정 (Silver 1)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/1931
//
// 그리디의 대표 문제. 한 회의실에 겹치지 않게 최대 몇 개 회의를 넣을까.
// 핵심 정렬: "끝나는 시간" 오름차순 → 끝시간 같으면 "시작 시간" 오름차순.
//   (끝나는 시간이 빠른 회의를 먼저 고르는 것이 최적)
//   끝시간==시작시간 인 회의는 연달아 가능 → end <= nextStart 허용.
// ⚠️ 시작==끝(길이 0) 회의가 있어 끝시간 같을 때 시작시간 정렬이 필요.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://melonicedlatte.com/algorithm/2018/02/02/014531.html

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
