// 백준 7576 - 토마토 (Gold 5)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/7576
//
// 다중 시작점 BFS의 정석. 익은 토마토(1)에서 동시에 퍼져 안 익은(0) 토마토를 익힌다.
// 핵심:
//   1) 처음부터 익어있는 모든 1을 "한꺼번에" 큐에 넣고 BFS (다중 소스).
//   2) 날짜 = 거리. dist 칸에 (시작 1의 날) + 1 누적, 또는 레벨 단위로 day++.
//   3) 다 돌고 0이 남아있으면 -1, 아니면 최댓값 거리(=마지막 날) 출력.
//   4) 처음부터 다 익어있으면 0.
// ⚠️ -1(토마토 없는 칸)은 벽처럼 통과 불가.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://4z7l.github.io/2020/09/15/algorithms-boj-7576.html

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
