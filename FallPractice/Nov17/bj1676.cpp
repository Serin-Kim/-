// bj1676 - 골드바흐의 추측
#include <iostream>
using namespace std;

int prime[1000001];

void calculate (int n) {

    for (int i = 3; i <= n - 2; i += 2) {
        if (prime[i] && prime[n - i]) { 
            cout << n << " = " << i << " + " << n - i << "\n";
            return;
        }
    }
    cout << "Goldbach's conjecture is wrong.\n";
    return;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    
    int n;
    cin >> n;

    for (int i = 2; i <= 1000000; i++) {
        prime[i] = 1;
    }

    for (int i = 2; i * i <= 1000000; i++) {
        if (prime[i] == 0)
            continue;
        
        for (int j = 2; i * j <= 1000000; j++) {
            prime[i * j] = 0;
        }
    }

     

    while (n) {
        calculate(n);
        cin >> n;
    }
}