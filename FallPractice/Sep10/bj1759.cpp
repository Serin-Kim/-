// 1759 - 암호 만들기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> v;
int visited[16];
char container[16];
int l, c;

void func(int cnt, int index) {
    if (cnt == l) {
        string ans;
        int vowel = 0;
        int not_vowel = 0;

        for (int i = 0; i < l; i++) {
            if (container[i] == 'a' || container[i] == 'e' || container[i] == 'i' || container[i] == 'o' || container[i] == 'u') {
                vowel++;
            }
            else {
                not_vowel++;
            }
            ans += container[i];
        }

        if (vowel && not_vowel >= 2) {
            cout << ans << '\n';
        }
 
        return;
    }

    for (int i = index; i < c; i++) {
        if (!visited[i]) {
            container[cnt] = v[i];
            visited[i] = 1;
            func(cnt + 1, i+ 1);
            visited[i] = 0;
        }
    }
}

int main() {
    
    cin >> l >> c;

    for (int i = 0; i < c; i++) {
        char c;
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());

    func(0, 0);


}