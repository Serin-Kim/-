// bj10952 - A + B - 5
#include <iostream>
using namespace std;

int main() { 
    int A, B; 

    cin >> A >> B;
    while(A || B) {
        cout << A + B << endl;
        cin >> A >> B;
    } 
}