// 백준 9012 - 괄호 (Silver 4)
// https://www.acmicpc.net/problem/9012

#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t T = 0;

    cin >> T;
    while (T--)
    {
        string str;
        stack<char> stStack;
        cin >> str;
        for (auto &s : str)
        {
            if (s == '(')
            {
                stStack.push(s);
            }
            else if (s == ')')
            {
                if(stStack.size() > 0 && stStack.top() == '(')
                {
                    stStack.pop();
                }
                else
                {
                    stStack.push(s);
                }
            }
        }

        if(stStack.size() == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
