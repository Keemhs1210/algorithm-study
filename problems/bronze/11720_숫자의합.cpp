// 백준 11720 - 숫자의 합 (Bronze 2)
// https://www.acmicpc.net/problem/11720
//
// 목표: 숫자를 "문자열로" 받아 각 자리 합 구하기 (정수로 받으면 자릿수 처리 번거로움)
//
// [아이디어] N은 안 써도 됨. 문자열 s 의 각 문자에서 '0'을 빼서 더한다.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    int sum = 0;
    for (char c : s) {
        // TODO: sum += (c - '0');
    }

    cout << sum << "\n";
    return 0;
}
