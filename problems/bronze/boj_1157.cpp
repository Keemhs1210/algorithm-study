// 백준 1157 - 단어 공부 (Bronze 1)
// https://www.acmicpc.net/problem/1157
//
// 목표: 카운팅 + 대소문자 통합 + "공동 최다 → ?" 처리
//
// [아이디어]
//   1) 대문자/소문자를 같은 칸으로 (toupper 또는 c|32 등). cnt[26] 누적.
//   2) 최댓값 찾기.
//   3) 최댓값을 가진 알파벳이 2개 이상이면 '?' 출력.
//      → 최댓값과 같은 카운트가 몇 번 나오는지 세거나, 최댓값 갱신 시 tie 플래그 관리.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    return 0;
}
