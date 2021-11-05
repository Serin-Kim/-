// bj1463 - 1로 만들기
#include <iostream> 
#include <algorithm>
using namespace std;

int dp[1000001];
 

int main() { 
    int n;
    cin >> n;

    
    for (int i = 2; i <= n; i++) {

        dp[i] = dp[i - 1] + 1; // case3

        if (i % 3 == 0) {
            dp[i] = min(dp[i / 3] + 1, dp[i]);  // case1
        }

        if (i % 2 == 0) {
            dp[i] = min(dp[i / 2] + 1,  dp[i]);  // case2
        }
    }

    cout << dp[n];
}
// dp[i] = dp[i - 1] + 1; case3 먼저 하는 이유
// case1, case2에서 case 3과 비교하려고
// if-else 가 아니라 if-if로 6으로 나눠질 때도 자동으로 고려됨