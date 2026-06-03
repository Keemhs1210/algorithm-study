# 03. DFS (깊이 우선 탐색)

## 개념
한 방향으로 **갈 수 있는 데까지 깊게** 들어갔다가 막히면 되돌아옴(백트래킹). **재귀** 또는 **스택**으로 구현.

## 언제 쓰나
- 연결요소 개수/크기 (BFS로도 가능)
- **모든 경우의 수 탐색** (순열·조합·부분집합) = 백트래킹
- 사이클 탐지, 위상정렬, 트리 순회

## C++ 템플릿
```cpp
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> adj[100001];
bool visited[100001];

void dfs(int cur) {
    visited[cur] = true;
    for (int next : adj[cur]) {
        if (!visited[next]) dfs(next);
    }
}
```

### 백트래킹 (N개 중 M개 고르기)
```cpp
int n, m;
int pick[10];
void backtrack(int start, int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) cout << pick[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) {   // 조합: start부터 → 중복 없이 증가
        pick[depth] = i;
        backtrack(i + 1, depth + 1);
    }
}
```

## 시간복잡도
- 그래프 탐색: O(V + E)
- 백트래킹: 경우의 수에 비례 (가지치기로 줄임)

## 대표 백준 문제
| 번호 | 제목 | 레벨 | 포인트 |
|------|------|------|--------|
| 2667 | 단지번호붙이기 | S1 | 연결요소 DFS |
| 11724 | 연결 요소의 개수 | S2 | 그래프 DFS 기본 |
| 15649 | N과 M (1) | S3 | 백트래킹(순열) 입문 |
| 15650 | N과 M (2) | S3 | 백트래킹(조합) |
| 1012 | 유기농 배추 | S2 | 연결요소 |
| 9663 | N-Queen | G4 | 백트래킹 대표 |

## 함정
- **재귀 깊이**: 정점 10만 이상 직선 그래프면 스택 오버플로 위험 → 반복 DFS나 BFS 고려.
- `visited` 체크 위치 주의 (방문 즉시 표시).
- 백트래킹은 **상태 복원**(되돌리기)이 핵심 — 전역 배열 쓸 때 빠뜨리지 말 것.
- DFS는 **최단거리 보장 안 함**. 최단거리는 BFS.
