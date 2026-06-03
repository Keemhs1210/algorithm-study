// [이분탐색] 백준 2805 - 나무 자르기 (Silver II)
// https://www.acmicpc.net/problem/2805
//
// 개념: study_materials/06_이분탐색.md  (매개변수 탐색)
//
// 문제: 높이 H로 절단기를 맞추면 H보다 높은 나무의 (높이-H)만큼을 가져간다.
//       적어도 M미터를 가져가는 절단기 높이 H의 "최댓값"을 구하라.
// 입력: 첫 줄 N M, 둘째 줄 나무 높이 N개 (높이 ≤ 10억)
// 출력: 가능한 최대 H
//
// 핵심: H가 작을수록 많이 가져감(단조성). "M 이상 가져가지는 최대 H"를 이분탐색.
//       합이 int 범위를 넘으므로 long long 필수.

#include <bits/stdc++.h>
using namespace std;

int n;
long long m;
vector<long long> tree;

// 절단기 높이 h일 때 가져가는 총량
long long cut(long long h) {
    long long sum = 0;
    // TODO 1: 각 나무에 대해 (높이 - h)가 양수면 sum에 더하기
    //   힌트: if (t > h) sum += t - h;
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    tree.resize(n);
    for (auto& t : tree) cin >> t;

    long long lo = 0, hi = *max_element(tree.begin(), tree.end());
    long long ans = 0;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        // TODO 2: cut(mid) >= m 이면 (충분히 가져감) → ans=mid, lo=mid+1
        //         아니면 hi=mid-1
    }

    cout << ans;
    return 0;
}
