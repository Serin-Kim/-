// 1920 - 수 찾기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

void exist(int left, int right, int target) { 

    int mid = (left + right) / 2;

    if (left <= right) {
        if (v[mid] == target) {
            cout << 1 << "\n";
            return;
        }
        else if (v[mid] > target) {
            right = mid - 1;
            exist(left, right, target);
        }
        else {
            left = mid + 1;
            exist(left, right, target);
        }
    }
    else {
        cout << 0 << "\n";
        return;
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);  
 
    int n, m, temp, target;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    cin >> m;
 
    for (int i = 0; i < m; i++) {
        cin >> target;

        exist(0, v.size() - 1, target);
    }
}