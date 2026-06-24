// 백준 10845 - 큐 (Silver 4)
// https://www.acmicpc.net/problem/10845
//
// 목표: std::queue + front/back 처리
//
// [명령] push X / pop / size / empty / front / back
//   - pop/front: 비었으면 -1
//   - back: 비었으면 -1, 아니면 가장 최근에 들어온 값

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    queue<int> q;
    string cmd;
    while (n--) {
        cin >> cmd;
        if (cmd == "push") {
            int x; cin >> x;
            // TODO: q.push(x);
        } else if (cmd == "pop") {
            // TODO: 비었으면 -1, 아니면 q.front() 출력 후 q.pop()
        } else if (cmd == "size") {
            // TODO: q.size()
        } else if (cmd == "empty") {
            // TODO: 1/0
        } else if (cmd == "front") {
            // TODO: 비었으면 -1, 아니면 q.front()
        } else if (cmd == "back") {
            // TODO: 비었으면 -1, 아니면 q.back()
        }
    }
    return 0;
}
