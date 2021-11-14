// bj10845 - 큐
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, num;
    string cmd;
    queue<int> q;
    
    cin >> n;

    while (n--) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> num;
            q.push(num);
        }
        else if (cmd == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else {
                cout << -1 << "\n";
            } 
        }
        else if (cmd == "size") {
            cout << q.size() << "\n";
        }
        else if (cmd == "empty") {
            if (q.empty()) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (cmd == "front") {
            if (!q.empty()) {
                cout << q.front() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (cmd == "back") {
            if (!q.empty()) {
                cout << q.back() << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
}