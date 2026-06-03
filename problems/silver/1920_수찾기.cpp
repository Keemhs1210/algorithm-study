// 백준 1920 - 수 찾기 (Silver 4)
// https://www.acmicpc.net/problem/1920
//
// 목표: 이분 탐색의 정석 (정렬 후 binary_search)
//
// [아이디어] N개를 정렬해두고, M개의 질의마다 존재 여부를 O(logN)으로.
//   직접 lo/hi 이분탐색을 구현해도 되고, std::binary_search 써도 됨.
//   ⚠️ 선형 탐색(O(N*M))은 시간 초과.

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
        // TODO: a 안에 q 가 있으면 1, 없으면 0 출력
        //   방법 A) binary_search(a.begin(), a.end(), q)
        //   방법 B) 직접 lo=0, hi=n-1 이분탐색
    }
    return 0;
}
