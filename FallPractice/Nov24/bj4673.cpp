// bj4673 - 셀프 넘버
#include <iostream>
using namespace std;

int arr[10001];

int getSum (int n) {
    int sum = n;    // 일단 자기 자신 더하고 

    while (n) {
        sum += (n % 10);
        n /= 10;
    }

    return sum;

}


int main() {
    
    for (int i = 1; i <= 10000; i++) {
        int index = getSum(i);

        if (index <= 100000) {
            arr[index] = true;
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (arr[i] == false)   
            cout << i << "\n";
    }
}

