// bj1744 - 수 묶기 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() { 

    int n;
    cin >> n;

    vector<int> minus;
    vector<int> plus;
    vector<int> zero;
    vector<int> ans;

    int num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > 0) {
            if (num == 1) {
                ans.push_back(num);
            }
            else {
                plus.push_back(num);
            }
        }
        else if (num < 0){
            minus.push_back(num);
        }
        else {
            zero.push_back(num);
        }
            
    } 

    sort(plus.begin(), plus.end());
    sort(minus.begin(), minus.end());
 

    if (plus.size() % 2 != 0) {
        ans.push_back(plus[0]);
    }
        
    for (int i = plus.size() - 1; i > 0; i -= 2) { 
        ans.push_back(plus[i] * plus[i - 1]);
    }

    if (minus.size() % 2 != 0) {  
        if (zero.size() > 0) {
            zero.pop_back();
        }
        else {
            ans.push_back(minus[minus.size() - 1]);
        }
    }
        
    
        
    for (int i = 0; i < minus.size() - 1; i += 2) {
        ans.push_back(minus[i] * minus[i + 1]);
    }

    int sum = 0;
    for (int i = 0; i < ans.size(); i++) {
        sum += ans[i];
    }

    cout << sum;
}

// 1을 생각 못 함 - 무조건 더해야 한다.  