// bj10818 - 최소, 최대 
#include <iostream> 
using namespace std;
 

int main() { 
    int n, temp;
    cin >> n;
    
    int max = -1000000;
    int min = 1000000; 

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > max) max = temp;
        if (temp < min) min = temp; 
    }

    cout << min << ' ' << max;
 
}