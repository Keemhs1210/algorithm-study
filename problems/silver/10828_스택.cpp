// 백준 10828 - 스택 (Silver 4)
// https://www.acmicpc.net/problem/10828
//
// 목표: std::stack 또는 배열 스택 구현 + 명령 파싱
//
// [명령] push X / pop / size / empty / top
//   - pop: 비었으면 -1, 아니면 맨 위 값 출력 후 제거
//   - top: 비었으면 -1, 아니면 맨 위 값 출력
//   ⚠️ 명령 수 최대 1만이지만 cout endl 대신 '\n' / 빠른입출력 습관화.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<int> st;
    string cmd;
    while (n--) {
        cin >> cmd;
        if (cmd == "push") {
            int x; cin >> x;
            // TODO: st.push(x);
        } else if (cmd == "pop") {
            // TODO: 비었으면 -1, 아니면 st.top() 출력 후 st.pop()
        } else if (cmd == "size") {
            // TODO: st.size() 출력
        } else if (cmd == "empty") {
            // TODO: 비었으면 1, 아니면 0
        } else if (cmd == "top") {
            // TODO: 비었으면 -1, 아니면 st.top()
        }
    }
    return 0;
}
