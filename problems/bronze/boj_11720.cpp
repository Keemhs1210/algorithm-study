#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int32_t N = 0;
    string S;
    int32_t iSum = 0;

    cin >> N;
    cin >> S;
    for (auto &s : S)
    {
        int32_t iNum = int32_t(s - '0');
        iSum += iNum;
    }

    cout << iSum;

    return 0;
}
