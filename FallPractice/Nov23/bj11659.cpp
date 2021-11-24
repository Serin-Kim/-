// bj11659 - 구간 합 구하기 4
#include <iostream> 
using namespace std;

int arr[100001], sum[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    int temp = 0;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        temp += arr[i];
        sum[i] = temp;
    }

    int start, end;

    for (int i = 0; i < m; i++) {
        cin >> start >> end;
        cout << sum[end] - sum[start - 1] << "\n";
    }

}