// 백준 2750 - 수 정렬하기 (Bronze 2)
// https://www.acmicpc.net/problem/2750

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }   
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << "\n";
    }   
    return 0;
}
