// 백준 1110 - 더하기 사이클 (Bronze 1)
// https://www.acmicpc.net/problem/1110
//
// 목표: 자릿수 분해 + do-while 로 "원래 수로 돌아올 때까지" 반복
//
// [규칙] 주어진 수의 (각 자리 합)의 일의 자리를, 기존 수의 일의 자리 뒤에 붙여 새 수를 만든다.
//   예) 26 → 2+6=8 → 새수 68 → 6+8=14 → 새수 84 → ... 26으로 돌아오면 멈춤.
//   new = (기존 일의자리) * 10 + (자리합의 일의자리)
//
// [아이디어] cur 를 변형하며 사이클 길이 cnt 를 센다. cur == origin 이 되면 종료.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int origin = n;
    int cur = n;
    int cnt = 0;

    do {
        int tens = cur / 10;        // 십의 자리
        int ones = cur % 10;        // 일의 자리
        int sum = tens + ones;
        // TODO: cur = (ones * 10) + (sum % 10);
        cnt++;
    } while (cur != origin);

    cout << cnt << "\n";
    return 0;
}
