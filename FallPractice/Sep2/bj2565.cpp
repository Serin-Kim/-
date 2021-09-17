// 2565 - 전깃줄
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[101];

int main() {
    int n;
    cin >> n;

    vector<pair <int, int> > v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));

        dp[i] = 1;
    }

    sort(v.begin(), v.end());   // 다 정렬 

    int ans = 0;

    // LIS 가장 긴 증가하는 부분 수열 구하기 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[i].second > v[j].second)
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }

    ans = n - ans;  // 정답은 LIS 가 아닌 애들 

    cout << ans << "\n";
}