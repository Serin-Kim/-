// bj1924 - 2007년
#include <iostream> 
using namespace std;

int date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main() { 
    int x, y;
    cin >> x >> y;

    int cnt = y;

    for (int i = 0; i < x - 1; i++) {
        cnt += date[i];
    }

    cout << day[cnt % 7];
 
}