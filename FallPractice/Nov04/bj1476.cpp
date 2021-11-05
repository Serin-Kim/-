// bj1476 - 날짜 계산 
#include <iostream>
using namespace std;

int main() {
    int E, S, M;
    cin >> E >> S >> M;
    
    int cnt = 1;
    int answer;

    while(true) {
        // 무한 루프 발생 
        if (cnt % 15 == E && cnt % 28 == S && cnt % 19 == M) {
            answer = cnt;
            break;
        }
        // if ((cnt - E) % 15 == 0 && (cnt - S) % 28 == 0 && (cnt - M) % 19 == 0) {
        //     answer = cnt;
        //     break;
        // }
        else 
            cnt++;
    }
    cout << answer;
}
