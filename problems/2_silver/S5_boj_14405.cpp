// 백준 14405 - 피카츄 (Silver 5)
// https://www.acmicpc.net/problem/14405

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string S;
    cin >> S;

    string strCmp; // 계속 두글자 세글자 쌓아서 검사 후 버리기
    int32_t iPassFlag = 0;
    for (auto &s : S)
    {
        strCmp += s;
        // 두글자 검사
        if (strCmp.size() == 2)
        {
            if ((strCmp == "pi" || strCmp == "ka"))
            {
                strCmp.erase(0, 2);
                iPassFlag = 1;
            }
            else if (strCmp != "ch") // chu 될 수 있는 후보군 제외 지우기
            {
                iPassFlag = 0;
                strCmp.erase(0, 2);
                break;
            }
        }
        else if (strCmp.size() == 3)
        {
            if (strCmp == "chu")
            {
                iPassFlag = 1;
                strCmp.erase(0, 3);
            }
            else
            {
                iPassFlag = 0;
                strCmp.erase(0, 3);
                break;
            }
        }
        else
        {
            iPassFlag = 0;
        }
    }

    if (iPassFlag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
