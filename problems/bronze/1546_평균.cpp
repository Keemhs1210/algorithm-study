// 백준 1546 - 평균 (Bronze I)
// https://www.acmicpc.net/problem/1546
//
// 워밍업 목표: 배열에서 최댓값 찾기 + 실수(double) 연산 + 평균 계산
//
// [핵심 아이디어]
//   세준이는 자기 점수 중 최댓값 M을 골라서,
//   모든 점수를  새점수 = 점수 / M * 100  으로 바꾼다.
//   바뀐 점수들의 "새 평균"을 출력하면 된다.
//   즉:  (Σ(점수/M*100)) / N   =   (Σ점수) / M / N * 100

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // 1) N개의 점수를 읽으면서 (a) 합계 sum  (b) 최댓값 maxScore 를 동시에 구한다.
    //    - sum 은 정수 합이어도 되고, double 로 잡아도 된다.
    //    - 최댓값은 0~100 범위이므로 int 로 충분.
    double sum = 0;
    int maxScore = 0;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        // TODO: sum 에 score 더하기
        // TODO: maxScore 갱신 (score 가 더 크면 교체)  →  max(...) 써도 됨
    }

    // 2) 새 평균 = sum / maxScore / n * 100
    //    실수 나눗셈이 되도록 주의! (위에서 sum 을 double 로 잡았으니 자동으로 실수 연산)
    double answer = 0; // TODO: 위 식으로 계산

    // 3) 출력. 소수점 오차 허용 범위가 넓으니 그냥 cout << answer 로 충분.
    cout << answer << "\n";

    return 0;
}
