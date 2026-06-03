# 📚 알고리즘 개념 정리 (C++)

백준 Silver → Gold 공략에 필요한 필수 알고리즘 개념 모음.
각 문서는 **개념 → 언제 쓰나 → C++ 템플릿 → 시간복잡도 → 대표 백준 문제 → 함정** 순서.

| # | 주제 | 핵심 | 대표 난이도 |
|---|------|------|------------|
| 01 | [정렬](01_정렬.md) | `sort`, 비교함수, 좌표정렬 | B~S |
| 02 | [BFS](02_BFS.md) | 큐, 최단거리(가중치 1) | S~G |
| 03 | [DFS](03_DFS.md) | 재귀/스택, 백트래킹, 연결요소 | S~G |
| 04 | [구현·시뮬레이션](04_구현_시뮬레이션.md) | 방향배열, 좌표이동, 격자 | S~G |
| 05 | [그리디](05_그리디.md) | 정렬 후 탐욕 선택, 교환논증 | S~G |
| 06 | [이분탐색](06_이분탐색.md) | `lower_bound`, 매개변수 탐색 | S~G |
| 07 | [DP](07_DP.md) | 점화식, 메모이제이션, 배낭 | S~G |

> 🧩 각 개념을 **직접 풀어보는 스켈레톤 코드**는 [skeletons/](skeletons/README.md) 폴더에 있어요. (`// TODO` 채우기 → 백준 제출)

## 공통 C++ 기본 템플릿
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // ...
    return 0;
}
```
- `ios_base::sync_with_stdio(false); cin.tie(nullptr);` → C++ 입출력 가속 (입력 큰 문제 필수)
- 단, 위 가속 쓰면 `cin`과 `scanf` 섞어 쓰지 말 것
