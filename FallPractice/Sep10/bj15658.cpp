// 15658 - 연산자 끼워넣기 (2)
#include <iostream>  
using namespace std;
 
int n;
int num[11];  

int Max_Value = -1000000001;
int Min_Value = 1000000001;

int Plus, Minus, Mult, Div; 

void Dfs(int p, int mi, int mu, int d, int cnt, int sum) {
    if (cnt == n) {
        // cout << "sum = " << sum << endl;
        if (sum > Max_Value) Max_Value = sum;
        if (sum < Min_Value) Min_Value = sum;
        return;
    }

    if (p < Plus) 
        Dfs(p + 1, mi, mu, d, cnt + 1, sum + num[cnt]);
    if (mi < Minus)
        Dfs(p, mi + 1, mu, d, cnt + 1, sum - num[cnt]);
    if (mu < Mult) 
        Dfs(p, mi, mu + 1, d, cnt + 1, sum * num[cnt]);
    if (d < Div)
        Dfs(p, mi, mu, d + 1, cnt + 1, sum / num[cnt]);


} 

int main() {
    
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    cin >> Plus >> Minus >> Mult >> Div;

    Dfs(0, 0, 0, 0, 1, num[0]);

    cout << Max_Value << "\n";
    cout << Min_Value << "\n";

}