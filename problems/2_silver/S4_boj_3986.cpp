// 백준 3986 - 좋은 단어 (Silver 4)
// https://www.acmicpc.net/problem/3986

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0; 
    int32_t iCnt = 0;
    cin >> N;

    while(N--)
    {
        string str;
        stack<char> stBuf;
        cin >> str;
        for(auto&s : str)
        {
            if(stBuf.size() > 0)
            {
                if(stBuf.top() == s)
                {
                    stBuf.pop();
                    continue;
                }
            }
            stBuf.push(s);
        }

        if(stBuf.size() == 0)
        {
            iCnt++;
        }
    }

    cout << iCnt;
    return 0;
}
