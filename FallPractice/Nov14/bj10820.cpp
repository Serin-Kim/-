// bj10820 - 문자열 분석
#include <iostream>
using namespace std;

int main() {
    

    string s;

    while (getline(cin, s)) {
        

        int small = 0;
        int big = 0;
        int num = 0;
        int space = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ')    space++;
            else if (s[i] >= 'a' && s[i] <= 'z')    small++;
            else if (s[i] >= 'A' && s[i] <= 'Z')    big++;
            else    num++;
        }
        cout << small << ' ' << big << ' ' << num << ' ' << space << "\n";
    }
}