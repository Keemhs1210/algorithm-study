// 백준 10818 - 최솟값과 최댓값 (Bronze III) (Bronze 3)


#include <bits/stdc++.h>
using namespace std;

int main() {

    int32_t N = 0;
    constexpr int32_t iRange = 1000001;

    int32_t iMax = -iRange;
    int32_t iMin = iRange;

    cin >> N;
    for(int32_t iIdxI = 0; iIdxI < N; iIdxI++)
    {
        int32_t iInput = 0;
        cin >> iInput;

        if(iInput > iMax)
        {
            iMax = iInput;
        }
        if(iInput < iMin)
        {
            iMin = iInput;
        }
    }

    cout << iMin << " " << iMax;

    return 0;
}
