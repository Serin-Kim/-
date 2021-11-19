// bj1676 - 팩토리얼 0의 개수
#include <iostream>
using namespace std;

// int main() {
//     int n;
//     int two = 0;
//     int five = 0;
//     cin >> n;

//     for (int i = 2; i <= n; i *= 2) {
//         two += n / i; 
//     }

//     for (int i = 5; i <= n; i *= 5) {
//          five += n / i; 
//     }

//     // two, five 중에 작은 값이 정답 
//     if (two > five) cout << five;
//     else cout << two;
// }

// five가 항상 더 작다
int main() {
    int n;
    cin >> n;
    int cnt = 0;

    // for (int i = 1; i <= n; i++) {

    //     int num = i;
    //     while (num % 5 == 0) {  // 5로 나눠떨어질 때만 고려 
    //         num /= 5;
    //         cnt++;
    //     }
    // }

    while (n >= 5) {
        cnt += n / 5;
        // cout << n / 5 << endl;
        n /= 5;
    }

    cout << cnt;
}