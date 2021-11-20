// bj10814 - 나이순 정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare (pair<int, string> v1, pair<int, string> v2) {

    return v1.first < v2.first;
}

int main() {
    int n, age;
    string name;
    cin >> n;

    vector <pair <int, string> > v;

    for (int i = 0; i < n; i++) {
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].first << ' ' << v[i].second << "\n";
    }
}