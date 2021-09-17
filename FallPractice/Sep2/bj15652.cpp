// 15652 - N과 M (4)
#include <iostream>
using namespace std;

int m, n;

int arr[9]; 
int visited[9];

void func (int cnt, int index) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << arr[i] << ' ';
        }
        cout << "\n";

        return;
    }

    for (int i = index; i <= n; i++) {
        arr[cnt] = i;
        func(cnt + 1, i);
    }
}

int main() {
    cin >> n >> m;

    func(0, 1);
}