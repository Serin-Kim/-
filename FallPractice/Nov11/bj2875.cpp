// bj2875 - 대회 or 인턴
#include <iostream>
using namespace std;

int main () {
    int n, m, k;
    cin >> n >> m >> k;

    int max = 0;

    while (n >= 2 && m >= 1) {
        n -= 2;
        m -= 1;
        max++;
    }

    while (n + m < k) {
        n += 2;
        m++;
        max--;
    }
    cout << max;
}
 