// 2630 - 색종이 만들기
#include <iostream>
using namespace std;

int white, blue;
int paper[129][129];

void divConq (int y, int x, int n) {
    int cnt_blue = 0;

    for (int i = y; i < y + n; i++) {
        for (int j = x; j < x + n; j++) {
            if (paper[i][j] == 1)
                cnt_blue++;
        }
    }

    if (cnt_blue == 0) {
        white++;
    }
    else if (cnt_blue == n * n) {
        blue++;
    }
    else {  // 섞여 있음
        divConq(y, x, n / 2);
        divConq(y + n / 2, x, n / 2);
        divConq(y, x + n / 2, n / 2);
        divConq(y + n / 2, x + n / 2, n / 2);
    }
}


int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
        }
    }

    divConq(0, 0, n);

    cout << white << "\n";
    cout << blue << "\n";
}