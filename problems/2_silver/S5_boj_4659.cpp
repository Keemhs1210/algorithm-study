// 백준 4659 - 비밀번호 발음하기 (Silver 5)
// https://www.acmicpc.net/problem/4659

#include <bits/stdc++.h>
using namespace std;

// 모음이면 true, 자음이면 false
bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;

    while (1)
    {
        int32_t iFlag = 0;
        cin >> str;
        if (str == "end")
        {
            return 0;
        }

        string strRule1 = "aeiou"; // 모음 포함

        char prevChar = 0;
        char prevChar2 = 0;

        for (auto &s : str)
        {
            // Check Rule 1
            if (isVowel(s) == true)
            {
                iFlag = 0;
                break;
            }
            else
            {
                iFlag = -1;
            }
        }

        for (auto &s : str)
        {
            // Check Rule 2
            if (prevChar2 != 0)
            {
                if (isVowel(prevChar2) == isVowel(prevChar) && isVowel(prevChar) == isVowel(s))
                {
                    iFlag = -1;
                    break;
                }
            }
            // Check Rule 3
            if (prevChar != 0)
            {
                if (s == prevChar)
                {
                    if (s == 'e' || s == 'o')
                    {
                        iFlag = 0;
                    }
                    else
                    {
                        iFlag = -1;
                        break;
                    }
                }
            }

            // Memory
            prevChar2 = prevChar;
            prevChar = s;
        }

        if (iFlag == 0)
        {
            printf("<%s> is acceptable.\n", str.c_str());
        }
        else
        {
            printf("<%s> is not acceptable.\n", str.c_str());
        }
    }

    return 0;
}
