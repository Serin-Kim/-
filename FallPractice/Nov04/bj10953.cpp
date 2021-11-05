// bj10953 - A + B - 6
#include <iostream>
#include <string>
using namespace std;

int main() { 
    int T;
    string s;
    int A, B;
    char c;

    cin >> T;

    for (int i = 0; i < T; i++) {
        // cin >> s;
        // A = stoi(s.substr(0, 1));
        // B = stoi(s.substr(2, 1));
        cin >> A >> c >> B;

        cout << A + B << '\n';
    }
}