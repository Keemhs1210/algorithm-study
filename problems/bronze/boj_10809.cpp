// 백준 10809 - 알파벳 찾기 (Bronze 2)
// https://www.acmicpc.net/problem/10809
//
// 목표: 문자열 순회 + 알파벳-인덱스 변환(c - 'a')
//
// [아이디어] 각 알파벳 a~z 의 "첫 등장 위치"를 -1로 초기화 후,
//   문자열을 왼→오로 훑으며 아직 -1인 글자만 현재 인덱스로 채운다.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int pos[26];
    for (int i = 0; i < 26; i++) pos[i] = -1;

    for (int i = 0; i < (int)s.size(); i++) {
        int c = s[i] - 'a';
        // TODO: pos[c] 가 아직 -1이면 i 로 설정 (첫 등장만 기록)
    }

    for (int i = 0; i < 26; i++) cout << pos[i] << " ";
    cout << "\n";
    return 0;
}
