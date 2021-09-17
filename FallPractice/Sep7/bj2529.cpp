// 2529 - 부등호
#include <iostream>
#include <string>
using namespace std;

int k;

char arr[11];
char newArr[11];
int visited[11];

string ansMax = "0";
string ansMin = "987654321";


void func (int cnt) {
    if (cnt == k + 1) {
        
        string temp;
        for (int i = 0; i < k; i++) { 
            
            temp += newArr[i];
            if (arr[i] == '<') {
                if (newArr[i] >= newArr[i+1])
                    return;
            }
            else {
                if (newArr[i] <= newArr[i+1])
                    return;
            }
        }
        temp += newArr[k]; 

        if (temp > ansMax)
            ansMax = temp;
        
        if (temp < ansMin)
            ansMin = temp;

        return;
    }

    for (int i = 0; i < 10; i++) {
        if (!visited[i]) {
            newArr[cnt] = i + '0';
            visited[i] = 1;
            func(cnt + 1);
            visited[i] = 0;
        }
    }
}

int main() {   
    cin >> k;

    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    func(0);

    cout << ansMax << "\n";
    cout << ansMin << "\n";
}