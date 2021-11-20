// bj10989 - 수 정렬하기 3
#include <iostream> 
using namespace std;

int arr[10001];
 
int main() { 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << "\n";
        }
    }
}

// 메모리 초과를 주의해야 하는 문제 