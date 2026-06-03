// 백준 10866 - 덱 (Silver 4)
// https://www.acmicpc.net/problem/10866
//
// 목표: std::deque — 양쪽 삽입/삭제
//
// [명령] push_front X / push_back X / pop_front / pop_back / size / empty / front / back
//   - pop/front/back: 비었으면 -1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq;
    string cmd;
    while (n--) {
        cin >> cmd;
        if (cmd == "push_front") {
            int x; cin >> x;
            // TODO: dq.push_front(x);
        } else if (cmd == "push_back") {
            int x; cin >> x;
            // TODO: dq.push_back(x);
        } else if (cmd == "pop_front") {
            // TODO: 비었으면 -1, 아니면 dq.front() 출력 후 pop_front()
        } else if (cmd == "pop_back") {
            // TODO: 비었으면 -1, 아니면 dq.back() 출력 후 pop_back()
        } else if (cmd == "size") {
            // TODO: dq.size()
        } else if (cmd == "empty") {
            // TODO: 1/0
        } else if (cmd == "front") {
            // TODO: 비었으면 -1, 아니면 dq.front()
        } else if (cmd == "back") {
            // TODO: 비었으면 -1, 아니면 dq.back()
        }
    }
    return 0;
}
