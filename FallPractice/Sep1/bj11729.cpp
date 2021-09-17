// 11729 - 하노이 탑
#include <iostream>
#include <vector>
using namespace std;

int cnt;
vector<pair <int, int> > ans;

void hanoi (int n, int start, int goal, int via) {
    cnt++;

    if (n == 1) {
        ans.push_back(make_pair(start, goal));
    }
    else {
        hanoi(n-1, start, via, goal);
        // n-1 개의 원반을 A->B 로 C를 이용하여 옮긴다. 
        ans.push_back(make_pair(start, goal));
        // 제일 큰 원반을 A->C로 옮긴다. 
        hanoi(n-1, via, goal, start);
        // n-1 개의 원반을 B->C 로 A를 이용하여 옮긴다. 
    }

}

int main() {
    int n;
    cin >> n;

    hanoi(n, 1, 3, 2); 

    cout << cnt << "\n";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << ' ' << ans[i].second << "\n";

    }
}