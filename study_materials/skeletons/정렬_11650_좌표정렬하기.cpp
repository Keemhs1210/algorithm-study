// [정렬] 백준 11650 - 좌표 정렬하기 (Silver V)
// https://www.acmicpc.net/problem/11650
//
// 개념: study_materials/01_정렬.md  (pair 사용자 정렬)
//
// 문제: N개의 점 (x, y). x 오름차순, x가 같으면 y 오름차순으로 정렬해 출력.
// 입력: 첫 줄 N(≤10만), 다음 N줄 "x y"
// 출력: 정렬된 좌표 N줄
//
// 힌트:
//   - pair<int,int>는 기본 비교가 first→second 사전순이라 그냥 sort면 된다.
//   - N이 10만이라 출력도 많음 → 입출력 가속 + '\n' 사용.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int,int>> points(n);

    // TODO 1: N개의 (x, y)를 입력받아 points에 저장
    //         힌트: for문 + cin >> points[i].first >> points[i].second;

    // TODO 2: points 정렬
    //         힌트: sort(points.begin(), points.end());

    // TODO 3: 정렬된 좌표 출력 ("x y\n")
    //         힌트: for (auto& [x, y] : points) cout << x << ' ' << y << '\n';

    return 0;
}
