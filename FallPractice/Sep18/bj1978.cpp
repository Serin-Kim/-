// 1978 - 소수 찾기 
#include <iostream>
using namespace std;

 
int ans = 0;
void isPrime(int num) {
    if (num < 2) return;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return;
    }
    ans++;
}

int main() {
    int n;
    
    cin >> n;

    

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        isPrime(num);
            
    }

    cout << ans << "\n";
}