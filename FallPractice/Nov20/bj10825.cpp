// bj18025 - 국영수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct student {
    string name;
    int kor, eng, math;
};

bool compare (student s1, student s2) {
    if (s1.kor == s2.kor && s1.eng == s2.eng && s1.math == s2.math)
        return s1.name < s2.name;
    else if (s1.kor == s2.kor && s1.eng == s2.eng)
        return s1.math > s2.math;
    else if (s1.kor == s2.kor)
        return s1.eng < s2.eng;
    else    
        return s1.kor > s2.kor;
}

int main() {
    int n, Kor, Eng, Math;
    string Name;

    cin >> n;

    vector<student> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math; 
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i].name << "\n";
    }
}