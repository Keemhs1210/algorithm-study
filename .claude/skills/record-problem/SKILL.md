---
name: record-problem
description: 백준 문제를 풀어 통과했을 때 progress.md와 Notion 트래커에 동시 기록한다. "기록해줘", "progress 기록", "노션에도 기록", "record" 등 풀이 통과 후 기록 요청 시 사용. 인자로 백준 번호를 받을 수 있다(예 /record-problem 2579).
---

# 백준 풀이 기록 (progress.md + Notion)

통과한 백준 문제를 **progress.md**와 **Notion 트래커** 두 곳에 일관되게 기록한다.

## 0. 입력 확인
- 대상 백준 번호 확인(인자 또는 직전 대화에서). 풀이 파일은 `problems/<bronze|silver|gold>/boj_<번호>.cpp`.
- 통과가 검증됐는지 확인. 미검증이면 먼저 [grade-problem](../grade-problem/SKILL.md)으로 채점(코드 검토 + 전수/경계/부하 검증). 예제 한 번 돌린 것만으로 "통과"로 간주하지 말 것.
- 오늘 날짜를 절대값(YYYY-MM-DD)으로 사용.

## 1. progress.md 갱신 (3곳)
파일: `progress.md` (레포 루트)
1. 해당 티어 목록 줄에서 번호 뒤에 `✅` 추가 (예: `2579` → `2579✅`).
2. `- **다음 문제**:` 줄을 큐의 다음 번호로 갱신 (목록은 silver 번호순 → gold 번호순).
3. `## 기록` 표 맨 끝에 행 추가:
   `| YYYY-MM-DD | 번호 | 문제명 | 레벨 | 주제 | ✅ | 핵심 접근 + 함정/배운점 |`

## 2. Notion 기록
서버 `claude_ai_Notion`. IDs:
- 부모 페이지 "코딩테스트 준비": `38b136e0ebe58026bf1ef2e2fc226c38`
- DB "코딩테스트 기록"(inline): `5379ed0d5feb4c8981047c5c4aa48c3f`
- data source: `6547614b-a436-485f-bb20-c2deee7faa38`

`notion-create-pages` (parent: `{data_source_id}`)로 **속성 + 본문 + 아이콘**을 한 번에 생성.

### 페이지 아이콘(icon) — 난이도 메달 (캘린더에서 난이도 식별용)
- `notion-create-pages`의 `icon` 파라미터에 난이도별 메달 이모지 지정:
  **Bronze 🥉 / Silver 🥈 / Gold 🥇 / Platinum 💎**
- 데일리 캘린더 뷰에서 제목 옆 아이콘으로 한눈에 난이도 구분. 신규 기록 시 반드시 설정.

### 속성(properties)
- `문제`(제목), `백준번호`(number), `유형`(JSON 배열, multi: DP·그리디·이분탐색·BFS/DFS·구현·문자열·정렬·수학·시뮬레이션 — 복수 가능), `난이도`(Bronze/Silver/Gold/Platinum), `세부난이도`(**"Silver 3"처럼 티어 풀네임+번호**, 약어 금지), `date:완료일:start`(YYYY-MM-DD), `풀이 방법`(한 줄 요약), `링크`(https://www.acmicpc.net/problem/<번호>)
- 유형별/전체 테이블 뷰는 `SORT BY "세부난이도" DESC, "완료일" DESC`(어려운 난이도 먼저) 유지.

### 본문(content, Notion 마크다운) — 4섹션 템플릿
```
## 📝 문제
<요약 1~2줄>

## 🔢 입출력 예제
**입력**
<code fence>샘플 입력</code fence>
**출력**
<code fence>샘플 출력</code fence>

## 💡 풀이 방법
<핵심 접근 + 함정>

## 💻 내가 푼 코드
<code fence cpp>problems/<티어>/boj_<번호>.cpp 의 실제 코드 그대로</code fence>
```
- 코드블록 언어는 `cpp`. 코드는 레포 파일에서 Read해서 그대로 붙임(요약/생략 금지).
- 새 유형이 생기면 해당 `유형별` 테이블 뷰도 `notion-create-view`(type table, `FILTER "유형" = "<유형>"`)로 추가.

## 제약
- Notion MCP에 뷰 삭제/타입변경 도구 없음 → 불필요 뷰는 사용자가 UI에서 수동 삭제.
- `query_*` 뷰 쿼리는 Business 플랜 필요(현재 불가) → 필터는 설정값으로만 확인.

## 마무리
- **exe 정리(필수)**: 채점/테스트로 생긴 컴파일 산출물을 삭제한다.
  `find problems -name "*.exe" -delete` (또는 `rm -f problems/**/*.exe`). 레포 루트의 `*.exe`도 함께 정리.
  (이미 .gitignore로 커밋은 안 되지만, 디스크에 남은 파일을 청소.)
- 기록 후 무엇을 했는지 요약(progress 3곳 + Notion 페이지 1개) 보고.
- 커밋/푸시는 사용자가 명시할 때만. progress.md만 커밋(노션은 git 무관).

참고: 이 워크플로우는 메모리 `notion-codingtest-tracker`와 동일 컨벤션.
