// 백준 10816 - 숫자 카드 2 (Silver 4)
// https://www.acmicpc.net/problem/10816
//
// 목표: "개수" 세기 → upper_bound - lower_bound, 또는 map/정렬+카운팅
//
// [아이디어] 1920이 "있냐/없냐"였다면, 이건 "몇 개냐".
//   정렬 후 (upper_bound(q) - lower_bound(q)) 가 q의 개수.
//   값 범위가 -1천만~1천만이라 배열 카운팅은 부담 → 정렬+이분 or unordered_map.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;
    sort(a.begin(), a.end());

    int m;
    cin >> m;
    while (m--) {
        int q;
        cin >> q;
        // TODO: auto lo = lower_bound(a.begin(), a.end(), q);
        //       auto hi = upper_bound(a.begin(), a.end(), q);
        //       cout << (hi - lo) << " ";
    }
    cout << "\n";
    return 0;
}
