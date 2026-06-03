// [BFS] 백준 2178 - 미로 탐색 (Silver I)
// https://www.acmicpc.net/problem/2178
//
// 개념: study_materials/02_BFS.md  (격자 최단거리)
//
// 문제: N×M 미로. 1은 이동 가능, 0은 벽. (1,1) -> (N,M) 최소 칸 수(시작·도착 포함).
// 입력: 첫 줄 N M, 다음 N줄에 공백 없이 0/1이 M개씩
// 출력: 최단 경로의 칸 수
//
// 핵심: 가중치가 모두 1 → BFS가 곧 최단거리. dist 배열을 방문표시 겸용.

#include <bits/stdc++.h>
using namespace std;

int n, m;
int board[101][101];
int dist_[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;                       // "110110" 같은 한 줄
        for (int j = 0; j < m; j++)
            board[i][j] = row[j] - '0';   // 문자 -> 숫자
    }

    queue<pair<int,int>> q;
    // TODO 1: 시작점 (0,0) 큐에 넣고 dist_[0][0] = 1 로 초기화

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            // TODO 2: 범위 밖이면 continue
            // TODO 3: 벽(board==0)이거나 이미 방문(dist_!=0)이면 continue
            // TODO 4: dist_[nx][ny] = dist_[x][y] + 1; 그리고 큐에 push
        }
    }

    cout << dist_[n-1][m-1];               // 도착점까지의 칸 수
    return 0;
}
