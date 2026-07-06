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
    int32_t N = 0; 
    cin >> N;
    int32_t iCurr = N;
    int32_t iCnt = 0;
    do
    {
        int32_t iSum = iCurr / 10 + iCurr % 10;
        iCurr = (iCurr % 10) * 10 + iSum % 10;
        iCnt++;
    }while(iCurr != N);
    
    cout << iCnt;
    return 0;
}
