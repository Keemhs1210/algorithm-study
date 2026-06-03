// 백준 1197 - 최소 스패닝 트리 (Gold 4)  [실전 모드: 백지에서 직접]
// https://www.acmicpc.net/problem/1197
//
// MST의 정석 — 크루스칼(Kruskal) + 유니온 파인드.
// 핵심:
//   1) 모든 간선을 가중치 오름차순 정렬.
//   2) 가벼운 간선부터: 두 끝 정점의 루트가 다르면(사이클 안 생김) 채택 + union, 합에 가중치 더함.
//   3) 정점 V개를 잇는 데 간선 V-1개 채택하면 종료.
//   - find: 경로 압축, union: 루트 합치기.
//
// 막히면 "힌트" / 정답은 "정답 보여줘".
// 레퍼런스(웹 검증): https://velog.io/@hyez_dev/%EB%B0%B1%EC%A4%80-1197-%EC%B5%9C%EC%86%8C-%EC%8A%A4%ED%8C%A8%EB%8B%9D-%ED%8A%B8%EB%A6%AC-C

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 백지. 설계 → 구현.

    return 0;
}
