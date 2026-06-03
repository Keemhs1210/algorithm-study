// 백준 2884 - 알람 시계 (Bronze 3)
// https://www.acmicpc.net/problem/2884
//
// 목표: 시/분 시간 계산 + 음수 처리(자정 넘김)
//
// [아이디어] 현재 H시 M분에서 45분 앞으로 당긴다.
//   분에서 45를 빼되, 음수가 되면 60을 더하고 시를 1 줄인다.
//   시가 음수면 23으로 (하루 전날로).

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m;
    cin >> h >> m;

    // TODO: m -= 45;  → m<0 이면 m+=60, h-=1;  → h<0 이면 h=23;
    //   (분이 -45 ~ 14 범위가 되므로 한 번만 보정하면 됨)

    cout << h << " " << m << "\n";
    return 0;
}
