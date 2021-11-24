// bj1292 - 쉽게 푸는 수학
#include <iostream>
using namespace std;

int arr[1001];

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 1;
    int num = 1;
    while (cnt <= 1000) {
        for (int i = 0; i < num; i++) {
            arr[cnt] = num;
            cnt++;
        }
        num++;
    }

    int answer = 0;
    for (int i = a; i <= b; i++) {
        answer += arr[i];
    }
    cout << answer;
}