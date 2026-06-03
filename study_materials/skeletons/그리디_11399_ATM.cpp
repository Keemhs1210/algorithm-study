// [그리디] 백준 11399 - ATM (Silver III)
// https://www.acmicpc.net/problem/11399
//
// 개념: study_materials/05_그리디.md  (정렬 후 누적합)
//
// 문제: N명이 인출에 걸리는 시간 P[i]. 한 줄로 세울 때 각 사람의
//       대기시간 = 자기 앞(자기 포함) 사람들의 시간 합. 모든 사람 대기시간의 합 최소화.
// 입력: 첫 줄 N, 둘째 줄 P[1..N]
// 출력: 최소 대기시간 합
//
// 핵심(그리디): 짧게 걸리는 사람을 앞에 세울수록 그 시간이 뒤로 여러 번 더해지는 걸 줄임
//               => 오름차순 정렬 후 누적합의 합.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> p(n);
    for (auto& x : p) cin >> x;

    // TODO 1: p 오름차순 정렬

    // TODO 2: 누적합(prefix)을 더해 총합 계산
    //   힌트: cur(앞사람들까지의 합)를 누적하고, total += cur
    int total = 0, cur = 0;
    // for (int x : p) { cur += x; total += cur; }

    cout << total;
    return 0;
}
