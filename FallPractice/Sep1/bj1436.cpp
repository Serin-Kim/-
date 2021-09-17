// 1436 - 영화감독 숌
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cnt = 0;
    int num = 1;

    while (n != cnt) {
        num++;
        string title = to_string(num);

        if (title.find("666") != -1)
            cnt++;
        
        if (cnt == n) {
            cout << title << '\n';
            break;
        }
    }
}