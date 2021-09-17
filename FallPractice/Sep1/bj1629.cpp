// 1629 - 곱셈
#include <iostream>
using namespace std;

int a, b, c;

long long power (int a, int b, int c) {
    if (b == 0) 
        return 1;

    long long n = power (a, b / 2, c);
    long long temp = n * n % c;

    if (b % 2 == 1) {
        return a * temp % c;
    }
    else 
        return temp;
}

int main() {
    cin >> a >> b >> c;

    int ans = power(a, b, c);

    cout << ans << endl;
}


// 5 = 1 * 2 * 2
// 4 = 2 * 2