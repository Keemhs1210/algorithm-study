// [구현·시뮬] 백준 1244 - 스위치 켜고 끄기 (Silver III)
// https://www.acmicpc.net/problem/1244
//
// 개념: study_materials/04_구현_시뮬레이션.md  (규칙 그대로 구현)
//
// 문제: 스위치 N개(1=켜짐,0=꺼짐). 학생들이 차례로 조작.
//   - 남학생(1): 자기 번호의 "배수" 스위치를 모두 토글
//   - 여학생(2): 자기 번호 위치를 중심으로 좌우 대칭이면서 상태가 같은
//                가장 넓은 구간을 찾아 그 구간을 모두 토글
// 입력: N / 스위치 상태 N개 / 학생 수 S / 각 줄 "성별 번호"
// 출력: 최종 스위치 상태. 한 줄에 20개씩, 공백 구분.
//
// 주의: 스위치는 1-indexed로 다루면 편하다 (switches[1..N]).

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> sw(n + 1);
    for (int i = 1; i <= n; i++) cin >> sw[i];

    int s; cin >> s;
    while (s--) {
        int sex, num;
        cin >> sex >> num;

        if (sex == 1) {
            // TODO 1: num의 배수 위치(num, 2*num, ...) 모두 토글
            //         힌트: for (int i = num; i <= n; i += num) sw[i] ^= 1;
        } else {
            // TODO 2: 항상 자기 위치(num)는 토글
            sw[num] ^= 1;
            // TODO 3: left=num-1, right=num+1 부터 시작해
            //         sw[left]==sw[right] 인 동안 양쪽을 토글하며 바깥으로 확장
            //         (left>=1 && right<=n 범위 체크). 상태가 다르면 멈춤.
        }
    }

    // TODO 4: 1..N 출력, 20개마다 줄바꿈, 값 사이 공백
    return 0;
}
