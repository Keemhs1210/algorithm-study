// 백준 1753 - 최단경로 (Gold 4)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/1753
//
// 다익스트라의 정석 (우선순위 큐 버전). 시작점에서 모든 정점까지 최단거리.
// 핵심:
//   - 인접 리스트 vector<vector<pair<int,int>>> adj  (목적지, 가중치).
//   - dist 배열 INF 초기화, dist[start]=0.
//   - priority_queue 에 (거리, 정점), 거리 오름차순(min-heap) → greater 또는 음수 트릭.
//   - 꺼낸 거리가 dist보다 크면 skip(낡은 값). 아니면 이웃 완화(relax).
//   - 도달 못 하면 "INF" 출력.
// ⚠️ O(V^2) 배열 방식은 시간 초과 → 반드시 힙 사용. 출력은 '\n'.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://melonicedlatte.com/algorithm/2018/03/04/061153.html

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
