// bj11652 - 카드
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main() { 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<long long> v;

    long long n, temp;
    cin >> n;

    for (long long i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    } 

    sort(v.begin(), v.end());

    long long answer = v[0];
    long long max = 1;
    long long cnt = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        if (cnt > max) {
            max = cnt;
            answer = v[i];
        }
    }
    cout << answer;
 
}
// sol2 : 벡터 사용
 

// sol1 : map 사용
// bj11652 - 카드
// #include <iostream> 
// #include <map>
// using namespace std;
 
 
// int main() { 
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     map<long, long> m;
//     map<long, long>:: iterator it;

//     long long n, temp;
//     cin >> n;

//     for (long long i = 0; i < n; i++) {
//         cin >> temp;
//         m[temp]++;
//     } 

//     long long max = 0;
//     long long answer;
//     for (it = m.begin(); it != m.end(); it++) {
//         if (it -> second > max) {
//             max = it -> second;
//             answer = it -> first;
//         }  
//     }

//     cout << answer;
 
// }