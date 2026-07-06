// 백준 1541 - 잃어버린 괄호 (Silver 2)
// https://www.acmicpc.net/problem/1541
//

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t iNum = 0;
    string str;
    string strBuf;
    vector<char> vOp;
    vector<int32_t> vNum;
    cin >> str;

    for (auto &s : str)
    {
        if (s == '-' || s == '+')
        {
            vOp.push_back(s);
            iNum = stoi(strBuf);
            vNum.push_back(iNum);
            strBuf.clear();
        }
        else
        {
            strBuf += s;
        }
    }

    if (strBuf.size() > 0)
    {
        iNum = stoi(strBuf);
        vNum.push_back(iNum);
    }

    int32_t iAnswer = vNum[0];
    int32_t iMinusFlag = 0;

    for (int32_t iIdxI = 1; iIdxI < vNum.size(); iIdxI++)
    {
        if (vOp[iIdxI - 1] == '-')
        {
            iMinusFlag = 1;
        }
        if (iMinusFlag == 1)
        {
            iAnswer -= vNum[iIdxI];
        }
        else
        {
            iAnswer += vNum[iIdxI];
        }
    }
    cout << iAnswer;
    return 0;
}