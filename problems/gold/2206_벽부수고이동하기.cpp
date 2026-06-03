// 백준 2206 - 벽 부수고 이동하기 (Gold 3)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/2206
//
// "상태 확장 BFS"의 대표. 일반 미로 최단거리에 "벽 1번 부술 수 있음" 상태 추가.
// 핵심:
//   - 방문 배열을 visited[x][y][부순여부(0/1)] 3차원으로.
//   - 큐 원소 = (x, y, broken). broken=0 일 때 벽(1)을 만나면 부수고 broken=1로 진행 가능.
//   - 도착(N,M)에 처음 닿은 거리가 답. 못 닿으면 -1.
//   - 시작/거리는 칸 수 기준(시작 칸 포함 1).
// ⚠️ broken 차원을 빼먹으면 "부수고 온 경로"와 "안 부수고 온 경로"가 섞여 오답.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://idkim97.github.io/2022-05-10-%EB%B0%B1%EC%A4%80_2206%EB%B2%88/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
