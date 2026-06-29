// 백준 10845 - 큐 (Silver 4)
// https://www.acmicpc.net/problem/10845
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    queue<int32_t> q;
    cin >> N;

    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        string str;
        int32_t iNum = 0;
        cin >> str;
        if (str == "push")
        {
            cin >> iNum;
            q.push(iNum);
        }
        else if (str == "pop")
        {
            if(q.size() > 0)
            {
                cout << q.front() << "\n"; 
                q.pop();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if(str == "size")
        {
            cout << q.size() << "\n";
        }
        else if(str == "front")
        {
            if(q.size() > 0)
            {
                cout << q.front() << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if(str == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if(str == "back")
        {
            if(q.size() > 0)
            {
                cout << q.back() << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }
    return 0;
}
