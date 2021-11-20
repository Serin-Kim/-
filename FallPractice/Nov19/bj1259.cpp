// bj1259 - 팰린드롬수
#include <iostream>
using namespace std;

int main() {
    string s;
    
    while (cin >> s) {
        if (s == "0") break;

        string temp = s;
        reverse(temp.begin(), temp.end());
        if (s == temp)
            cout << "yes\n";
        else   
            cout << "no\n";

    }
}