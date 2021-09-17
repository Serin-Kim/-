// 15654 - N과 M (5) 
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

int init[9];
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

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            arr[cnt] = init[i];
            visited[i] = 1;     // visited[init[i]] 아님 -> Out of bounds
            func(cnt + 1);
            visited[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> init[i];
    }

    sort(init, init + n);
    
    func(0);
}