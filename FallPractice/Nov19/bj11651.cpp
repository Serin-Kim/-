// bj11651 - 좌표 정렬하기 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> v1, pair <int, int> v2) {
    if (v1.second == v2.second)
        return v1.first < v2.first;
    return v1.second < v2.second;
  
}

int main() {
    int n, x, y;
    cin >> n;

    vector<pair<int, int> > v;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].first << ' ' << v[i].second << "\n";
    }
}
