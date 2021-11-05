// bj11720 - 숫자의 합
#include <iostream> 
using namespace std;

int main() { 
    int N;
    string s;
    int sum = 0;

    cin >> N;
    cin >> s;

    for (int i = 0; i < N; i++) {
        sum += s[i] - '0';
    }

    cout << sum;
}