// bj1676 - 팩토리얼 0의 개수 
#include <iostream>
#include <algorithm>
using namespace std;

 

int main() {
    int n;
    int five = 0; 
    int two = 0;
    cin >> n;
    
    for (int i = 2; i <= n; i *= 2) {
        two += (n / i);
    }
    for (int i = 5; i <= n; i *= 5) {
        five += (n / i);
    }

    cout << min(two, five);

}

// 곱해지는 2와 5 개수를 세서 더 작은 것이 답 