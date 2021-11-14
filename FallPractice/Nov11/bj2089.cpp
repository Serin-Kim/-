// bj2089 - -2진수
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string result;

    if (n == 0)
        result = "0";
    
    while (n) {
        if (n % -2 == 0) {
            result = "0" + result;
            n /= (-2);
        }
        else {
            result = "1" + result;
            n = (n - 1) / -2;
        }
        
    }
    
    cout << result;

    return 0; 
}

// c++: n 이 홀수인 경우 내림을 할 수 있도록 (n-1)/2로 계산해야 함 