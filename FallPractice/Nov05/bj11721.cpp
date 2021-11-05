// bj11721 - 열 개씩 끊어 출력하기
#include <iostream> 
using namespace std;

int main() { 
    string s;
    cin >> s;

    int cnt = 1;

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];

        cnt++;

        if (cnt == 11) {
            cnt = 1;
            cout << endl;
        }
    }
}