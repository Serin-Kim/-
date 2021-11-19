// bj1929 - 소수 구하기
#include <iostream>
using namespace std;

int prime[1000001];

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= n; i++) {
        prime[i] = i;
    }

    for (int i = 2; i * i <= n; i++) {
        if (prime[i] == 0)
            continue;
        
        for (int j = 2; i * j <= n; j++) {
            prime[i * j] = 0;
        }
    }

    for (int i = m; i <= n; i++) {
        if (prime[i])
            cout << prime[i] << '\n';
    }
}