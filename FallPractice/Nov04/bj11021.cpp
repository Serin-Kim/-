// bj11021 - A + B - 7
#include <iostream>
#include <string>
using namespace std;

int main() { 
    int T; 
    int A, B; 

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        
        cout << "Case #"<< i + 1 << ": " << A + B << '\n';
    }
}