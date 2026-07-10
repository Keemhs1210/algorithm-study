// 백준 11723 - 집합 (Silver 5)
// https://www.acmicpc.net/problem/11723

#include <bits/stdc++.h>
#define MAX_NUM_ARR 21
using namespace std;

int32_t aiArr[MAX_NUM_ARR] = {0};

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t M = 0;
    cin >> M;

    while (M--)
    {
        string str;
        int32_t x = 0;
        cin >> str;
        if (str == "add")
        {
            cin >> x;
            aiArr[x] = 1;
        }
        else if (str == "remove")
        {
            cin >> x;
            aiArr[x] = 0;
        }
        else if (str == "check")
        {
            cin >> x;
            if (aiArr[x] != 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if (str == "toggle")
        {
            cin >> x;
            if (aiArr[x] != 0)
            {
                aiArr[x] = 0;
            }
            else
            {
                aiArr[x] = 1;
            }
        }
        else if (str == "all")
        {
            memset(aiArr, 1, sizeof(aiArr));
        }
        else if (str == "empty")
        {
            memset(aiArr, 0, sizeof(aiArr));
        }
    }

    return 0;
}
