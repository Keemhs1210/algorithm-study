// 백준 10988 - 팰린드롬인지 확인하기 (Bronze 3)
// https://www.acmicpc.net/problem/10988

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string strInput;
    stack<char> stChar;
    cin >> strInput;

    int32_t iHalfSz = strInput.size() / 2;

    for (int32_t iIdxI = 0; iIdxI < iHalfSz; iIdxI++)
    {
        stChar.push(strInput[iIdxI]);
    }

    if (strInput.size() % 2 == 1)
    {

        iHalfSz++;
    }

    for (int32_t iIdxI = iHalfSz; iIdxI < strInput.size(); iIdxI++)
    {
        if (stChar.empty() == 1)
        {
            break;
        }
        if (stChar.top() == strInput[iIdxI])
        {
            stChar.pop();
        }
    }

    if (stChar.size() == 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}
