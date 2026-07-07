// 백준 10828 - 스택 (Silver 4)
// https://www.acmicpc.net/problem/10828

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    cin >> N;

    stack<int32_t> st;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        string str;
        cin >> str;
        if(str == "push")
        {
            int32_t iNum = 0;
            cin >> iNum;
            st.push(iNum);
        }
        else if(str == "pop")
        {
            if(st.size() > 0)
            {
                cout << st.top() << "\n";
                st.pop();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if(str == "size")
        {
            cout << st.size() << "\n";
        }
        else if(str == "empty")
        {
            cout << st.empty() << "\n";
        }
        else if(str == "top")
        {
            if(st.size() > 0)
            {
                cout << st.top() << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }

    }

    return 0;
}
