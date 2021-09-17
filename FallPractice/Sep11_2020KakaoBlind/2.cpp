#include <iostream> 
#include <string>
#include <vector> 
#include <cmath>
using namespace std;




// void isPrime(string s) {
//     int num = stoi(s); 

    
// }

int main() {
    int n, k;
    int answer = 0;
    cin >> n >> k;


    // 에라토스테네스 체 - n 범위 다시 
     bool *eratos = new bool[1000000];
    eratos[1] = true;
    for (int i = 2; i * i <= 1000000; i++) {
        if(eratos[i] == false) {
            for (int j = i * i; j <= 1000000; j+=i) {  // 여기 생각
                eratos[j] = true;
            }
        }
    }



    string converted;
    while(n / k) {
        converted = to_string(n % k) + converted;
        n /= k;
    }
    converted = to_string(n % k) + converted;

    cout << converted << endl;

    string temp;
    for (int i = 0; i < converted.size(); i++) {
        if (converted[i] != '0') {
            temp += converted[i];

            if (i == converted.size() - 1) { 
                if (eratos[stoi(temp)] == false) {
                    answer++;
                }
                cout << temp << endl; 
                temp.clear();
            }
        }
        else if (converted[i] == '0' && temp.size() != 0) {    
            if (eratos[stoi(temp)] == false) {
                answer++;
            }
            cout << temp << endl; 
            temp.clear();
        }
        
    }


    cout << answer << endl;
}