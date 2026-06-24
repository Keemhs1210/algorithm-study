// 백준 1157 - 단어 공부 (Bronze 1)
// https://www.acmicpc.net/problem/1157
//
// 목표: 카운팅 + 대소문자 통합 + "공동 최다 → ?" 처리

#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int32_t, int32_t> v1, pair<int32_t, int32_t> v2)
{
    return v1.first > v2.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string str;
    vector<pair<int32_t, int32_t>>v;

    cin >> str;
    v.resize(26);
    for(int32_t i = 0; i < 26; i++)
    {
        v[i].second = i;
    }
    for(auto s : str)
    {
        if(s >= 'A' && s <= 'Z')
        {
            v[s - 'A'].first++;
        }
        else
        {
            v[s - 'a'].first++;
        }
    }
    sort(v.begin(), v.end(), compare);
    if(v[0].first == v[1].first)
    {
        cout << '?';
    }
    else
    {
        char answer = 'A';
        answer += v[0].second;
        cout << answer;
    }
    return 0;
}
