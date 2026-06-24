// 백준 11650 - 좌표 정렬하기 (Silver 3)
// https://www.acmicpc.net/problem/11650
//
// 목표: 사용자 정의 비교 (x 오름차순, x 같으면 y 오름차순)
//
// [아이디어] pair<int,int> 의 기본 정렬이 (first, second) 사전식이라
//   사실 그냥 sort 만 해도 된다. 하지만 "비교 함수 작성" 연습이 핵심.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (auto& p : v) cin >> p.first >> p.second;

    // TODO: sort(v.begin(), v.end());
    //   (연습) 또는 람다 비교자:
    //   sort(v.begin(), v.end(), [](auto& a, auto& b){
    //       if (a.first != b.first) return a.first < b.first;
    //       return a.second < b.second;
    //   });

    for (auto& p : v) cout << p.first << " " << p.second << "\n";
    return 0;
}
