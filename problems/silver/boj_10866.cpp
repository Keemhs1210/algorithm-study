// 백준 10866 - 덱 (Silver 4)
// https://www.acmicpc.net/problem/10866
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int32_t N = 0;
    deque<int32_t> deq;

    cin >> N;

    for (int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iNum = 0;
        string str;
        cin >> str;
        if (str == "push_front")
        {
            cin >> iNum;
            deq.push_front(iNum);
        }
        else if (str == "push_back")
        {
            cin >> iNum;
            deq.push_back(iNum);
        }
        else if (str == "pop_front")
        {
            if (deq.size() > 0)
            {
                cout << deq.front() << "\n";
                deq.pop_front();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (str == "pop_back")
        {
            if (deq.size() > 0)
            {
                cout << deq.back() << "\n";
                deq.pop_back();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if(str == "size")
        {
            cout << deq.size() << "\n";
        }
        else if(str == "empty")
        {
            cout << deq.empty() << "\n";
        }
        else if(str == "front")
        {
            if (deq.size() > 0)
            {
                cout << deq.front() << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (str == "back")
        {
            if (deq.size() > 0)
            {
                cout << deq.back() << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
    }

    return 0;
}
