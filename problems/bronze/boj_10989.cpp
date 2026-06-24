// 백준 10989 - 수 정렬하기 3 (Bronze 1)
// https://www.acmicpc.net/problem/10989
//
// 목표: 계수 정렬(Counting Sort). N이 최대 1천만이라 sort 메모리/속도 부담 → 카운트 배열.
//
// [아이디어] 수의 범위가 1~10000 으로 작다. cnt[값]++ 로 세고,
//   1~10000 순서로 cnt[v] 번 출력하면 정렬 완료.
//   ⚠️ 입출력이 큼 → 빠른 입출력 필수, 출력은 한 번에 모으면 더 빠름.

#include <bits/stdc++.h>
using namespace std;

int cnt[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        // TODO: cnt[x]++;
    }

    // TODO: v=1..10000 돌면서 cnt[v] 번 "v\n" 출력
    //   (속도 위해 ostringstream 이나 '\n' 사용 권장)
    string out;
    for (int v = 1; v <= 10000; v++) {
        // for (int k = 0; k < cnt[v]; k++) out += to_string(v) + "\n";
    }
    cout << out;
    return 0;
}
