// 백준 2839 - 설탕 배달 (Bronze 3)
// https://www.acmicpc.net/problem/2839
//
// 워밍업 목표: 그리디 사고 + 정수 나눗셈/나머지 + "불가능" 처리
//
// [문제 요약]
//   설탕을 정확히 N킬로그램 배달해야 한다.
//   봉지는 3kg, 5kg 두 종류. 봉지 수를 최소로 하고 싶다.
//   정확히 N을 못 만들면 -1 출력.
//
// [핵심 아이디어 — 두 가지 접근]
//   (A) 그리디: 5kg을 최대한 많이 쓰고, 남는 양을 3으로 떨어뜨린다.
//       5를 하나씩 줄여가며 (N - 5*cnt5) 가 3의 배수가 되는 순간을 찾기.
//   (B) 완전탐색: 5kg 봉지 개수 b 를 0..N/5 까지 돌려보며
//       (N - 5*b) 가 3으로 나누어떨어지면 b + (N-5*b)/3 봉지.
//       그 중 최소값. (N <= 5000 이라 충분히 빠름)
//
//   아래 골격은 (B) 완전탐색 방식. 그리디가 익숙하면 그걸로 바꿔도 OK.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int answer = -1; // 못 만들면 -1 유지

    // 5kg 봉지를 b개 썼을 때를 모두 시도
    for (int b = 0; b * 5 <= n; b++) {
        int rest = n - b * 5;        // 5kg 쓰고 남은 무게
        // TODO: rest 가 3으로 나누어떨어지는지 확인 (rest % 3 == 0)
        //       나누어떨어지면 총 봉지수 = b + rest / 3
        //       answer 가 -1 이거나 더 크면 갱신 (min 사용 가능)
    }

    cout << answer << "\n";
    return 0;
}
