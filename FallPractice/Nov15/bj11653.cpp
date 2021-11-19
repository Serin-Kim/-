// bj11653 - 소인수분해
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 2;

    // while (n != 1) {
    //     if (n % k == 0) {
    //         cout << k << "\n";
    //         n /= k;
    //     }
    //     else 
    //         k++;
    // }

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << "\n";
            n /= i;
        }
    }

    if (n != 1)  cout << n << "\n";
}

// 소수를 신경쓰지 않고 iterator를 2부터 sqrt(N)까지 증가시키며 나누어 떨어지는 경우에 출력하고 n은 몫으로 감소