// 15649 - N과 M (1)
#include <iostream>
using namespace std;

int m, n;

int arr[9];
int visited[9];

void func (int cnt) {

    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << "\n";

        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            arr[cnt] = i;
            visited[i] = 1;
            func(cnt + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;

    func(0);
}