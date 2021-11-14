// bj10824 - 네 수 
#include <iostream>
#include <string>
using namespace std;

int main() {

    int a, b, c, d;
    string temp1, temp2;
    long long answer;
    cin >> a >> b >> c >> d;

    temp1 = to_string(a) + to_string(b);
    temp2 = to_string(c) + to_string(d);

    answer = stoll(temp1) + stoll(temp2);

    cout << answer;
     
}