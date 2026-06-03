// [DFS] 백준 2667 - 단지번호붙이기 (Silver I)
// https://www.acmicpc.net/problem/2667
//
// 개념: study_materials/03_DFS.md  (연결요소 + 크기)
//
// 문제: N×N 격자. 1은 집. 상하좌우로 연결된 집들의 묶음(단지)이 몇 개인지,
//       각 단지의 집 수를 오름차순으로 출력.
// 입력: 첫 줄 N, 다음 N줄에 공백 없이 0/1 N개씩
// 출력: 첫 줄 단지 수, 다음 줄부터 각 단지 집 수(오름차순)

#include <bits/stdc++.h>
using namespace std;

int n;
int board[26][26];
bool visited[26][26];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int count_;   // 현재 단지의 집 수

void dfs(int x, int y) {
    visited[x][y] = true;
    count_++;                              // 이 칸도 한 채
    for (int d = 0; d < 4; d++) {
        int nx = x + dx[d], ny = y + dy[d];
        // TODO 1: 범위 안 + board==1 + 미방문 이면 dfs(nx, ny) 재귀 호출
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string row; cin >> row;
        for (int j = 0; j < n; j++) board[i][j] = row[j] - '0';
    }

    vector<int> sizes;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // TODO 2: board==1 이고 아직 방문 안 했으면
            //         count_ = 0 초기화 → dfs(i,j) → sizes에 count_ push
        }
    }

    // TODO 3: sizes 오름차순 정렬, 단지 수와 각 크기 출력
    //         cout << sizes.size() << '\n'; 그 다음 정렬해서 한 줄에 하나씩

    return 0;
}
