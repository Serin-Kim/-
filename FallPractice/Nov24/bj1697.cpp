// bj1697 - 숨바꼭질
#include <iostream>
#include <queue>
using namespace std;

int n, k, answer;
bool visited[100001];
queue<pair<int, int> > q;

bool isValid (int n) {
    if (n < 0 || n > 100000 || visited[n]) {
        return false;
    }
    else {
        return true;
    }
}

void bfs (int n) {
    while (!q.empty()) {
        int data = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (data == k) {
            answer = cnt;
            break;
        }

        if (isValid(data - 1)) {
            visited[data - 1] = true;
            q.push(make_pair(data - 1, cnt + 1));
        }
        if (isValid(data + 1)) {
            visited[data + 1] = true;
            q.push(make_pair(data + 1, cnt + 1));
        }
        if (isValid(data * 2)) {
            visited[data * 2] = true;
            q.push(make_pair(data * 2, cnt + 1));
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;

    q.push(make_pair(n, 0));
    visited[n] = true;
    bfs(n);

    cout << answer;
}