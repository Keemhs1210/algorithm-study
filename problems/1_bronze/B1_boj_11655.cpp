// 백준 11655 - ROT13 (Bronze 1)
// https://www.acmicpc.net/problem/11655

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    getline(cin, str);

    string answer;
    for (auto &s : str)
    {
        // 소문자
        if (s >= 'a' && s <= 'z')
        {
            s = (s - 'a' + 13) % 26 + 'a';
        }
        else if ( s >= 'A' && s <= 'Z')
        {
            s = (s - 'A' + 13) % 26 + 'A';
        }
        
        answer += s;
    }

    cout << answer;
    return 0;
}
