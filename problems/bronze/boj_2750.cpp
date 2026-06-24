// 백준 2750 - 수 정렬하기 (Bronze 2)
// https://www.acmicpc.net/problem/2750
//
// 목표: std::sort 감 되찾기 (N<=1000 이라 어떤 정렬이든 OK)
//
// [아이디어] vector 에 담고 sort 후 한 줄에 하나씩 출력.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& x : v) cin >> x;

    // TODO: sort(v.begin(), v.end());

    for (int x : v) cout << x << "\n";
    return 0;
}
