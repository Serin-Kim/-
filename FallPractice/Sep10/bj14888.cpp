// 14888 - 연산자 끼워넣기
#include <iostream>
using namespace std;

int n;
int num[11];
int Plus, Minus, Mult, Div;

int max_value = -1000000001;
int min_value = 1000000001;


void Dfs(int p, int mi, int mu, int d, int sum, int cnt) {
    if (cnt == n) {
        if (sum > max_value) max_value = sum;
        if (sum < min_value) min_value = sum;
        return;
    }

    if (p < Plus) Dfs(p + 1, mi, mu, d, sum + num[cnt], cnt + 1);
    if (mi < Minus) Dfs(p, mi + 1, mu, d, sum - num[cnt], cnt + 1);
    if (mu < Mult) Dfs(p, mi, mu + 1, d, sum * num[cnt], cnt + 1);
    if (d < Div) Dfs(p, mi, mu, d + 1, sum / num[cnt], cnt + 1);
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> Plus >> Minus >> Mult >> Div;

    Dfs(0, 0, 0, 0, num[0], 1);

    cout << max_value << "\n";
    cout << min_value << "\n";

}