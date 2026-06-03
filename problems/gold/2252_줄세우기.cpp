// 백준 2252 - 줄 세우기 (Gold 3)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/2252
//
// 위상 정렬(Topological Sort)의 정석. "A가 B 앞" 관계들로 일렬 순서 만들기.
// 핵심 (진입차수 기반 BFS / Kahn):
//   1) 간선 A→B 마다 indeg[B]++.
//   2) indeg==0 인 정점을 큐에 모두 넣음.
//   3) 큐에서 꺼내 출력 → 그 정점의 이웃 indeg 감소 → 0 되면 큐에.
//   4) 답이 여러 개일 수 있음(아무거나 하나 출력). 사이클은 없다고 보장.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://ehs2803.github.io/baekjoon/%EC%BD%94%EB%94%A9%ED%85%8C%EC%8A%A4%ED%8A%B8/baekjoon-2252/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
