// 백준 1012 - 유기농 배추 (Silver 2)
// https://www.acmicpc.net/problem/1012
//
// 목표: 2차원 격자에서 "연결 요소(Connected Component) 개수" 세기
//        → BFS / DFS 둘 다 가능. 아래 골격은 BFS.
//
// [문제 요약]
//   M x N 밭에 배추가 K개 심어져 있다.
//   상하좌우로 인접한 배추끼리는 같은 그룹(지렁이 1마리가 다 커버).
//   필요한 지렁이 수 = 연결된 배추 덩어리(그룹)의 개수.
//   테스트케이스 T개를 반복 처리.
//
// [핵심 아이디어]
//   1) 격자를 0/1로 채운다 (1 = 배추).
//   2) 모든 칸을 훑으며, 아직 방문 안 한 배추를 만나면
//      그 자리에서 BFS로 연결된 배추를 전부 방문 처리하고, 그룹 수 +1.
//   3) 방향 배열 dx/dy 로 상하좌우 이동.
//
// ⚠️ 주의: 격자 크기(가로 M, 세로 N)의 순서 헷갈리기 쉬움.
//          백준 입력은 "M N K" 순서 (M=가로=열, N=세로=행). 좌표 (x,y) 정의를 코드 내내 일관되게!

#include <bits/stdc++.h>
using namespace std;

int M, N, K;                 // M=가로(열), N=세로(행), K=배추 수
int board[51][51];           // 배추 위치
bool visited[51][51];

int dx[4] = {1, -1, 0, 0};   // 상하좌우
int dy[4] = {0, 0, 1, -1};

// (sx, sy)에서 시작해 연결된 배추를 전부 방문 처리
void bfs(int sx, int sy) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            // TODO 1: 범위 체크 — nx 가 0..M-1, ny 가 0..N-1 안에 있는지
            //         (벗어나면 continue)
            // TODO 2: 배추가 있고(board[nx][ny]==1) 아직 방문 안 했으면(!visited[nx][ny])
            //         → visited 표시하고 q.push({nx, ny})
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;

        // 매 테스트케이스마다 board / visited 초기화
        memset(board, 0, sizeof(board));
        memset(visited, 0, sizeof(visited));

        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;       // 배추 좌표
            board[x][y] = 1;
        }

        int worms = 0;
        // TODO 3: 전체 격자(x: 0..M-1, y: 0..N-1)를 돌면서
        //         배추가 있고 방문 안 한 칸을 만나면 bfs(x,y) 호출하고 worms++
        for (int x = 0; x < M; x++) {
            for (int y = 0; y < N; y++) {
                // 여기에 조건 + bfs 호출 + worms++
            }
        }

        cout << worms << "\n";
    }
    return 0;
}
