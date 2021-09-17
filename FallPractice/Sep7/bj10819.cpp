// 10819 - 차이를 최대로
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n;

int num[9];
int visited[9];
int newArr[9];
int ans = 0;

void func(int cnt) {
    if (cnt == n) {
        int sum = 0;

        for (int i = 0; i < n - 1; i++) {
            sum += abs(newArr[i] - newArr[i + 1]);
        }   

        // cout << "sum = " << sum << endl;

        if (sum > ans)
            ans = sum;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            newArr[cnt] = num[i - 1];
            visited[i] = 1;
            func(cnt + 1);
            visited[i] = 0;
        }
    }
}



int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    func(0);

    cout << ans << "\n";
}

// 모든 조합 구하기..?