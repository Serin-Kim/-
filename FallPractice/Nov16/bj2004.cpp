// bj2004 - 조합 0의 개수
#include <iostream>
#include <algorithm>
using namespace std;

pair<long long, long long> getZero(long long n) {
    long long two = 0, five = 0;

    for (long long i = 2; i <= n; i *= 2) two += n / i;
    for (long long i = 5; i <= n; i *= 5) five += n / i;

    return (pair<long long, long long> (two, five));
}

int main() {
    long long n, m;
    cin >> n >> m;
    
    pair<long long, long long> ansN, ansM, ansNM;
    
    ansN = getZero(n);
    ansM = getZero(m);
    ansNM = getZero(n - m);

    cout << min(ansN.first - ansM.first - ansNM.first, ansN.second - ansM.second - ansNM.second);
 
}

// 접근 2, 5 개수 각각 빼고 작은 게 답  


// int main() {
//     long long n, m;
//     cin >> n >> m;
 
//     long long n_five = 0; 
//     long long m_five = 0;
//     long long n_m_five = 0;
//     long long n_two = 0; 
//     long long m_two = 0;
//     long long n_m_two = 0;
//     long long n_m = n - m;

//     for (long long i = 2; i <= n; i *= 2) {
//         n_two += n / i;
//     }
//     for (long long i = 2; i <= m; i *= 2) {
//         m_two += m / i;

//     }
//     for (long long i = 2; i <= n_m; i *= 2) {
//         n_m_two += n_m / i;

//     }
//     for (long long i = 5; i <= n; i *= 5) {
//         n_five += n / i;

//     }
//     for (long long i = 5; i <= m; i *= 5) {
//         m_five += m / i;
//     }
//     for (long long i = 5; i <= n_m; i *= 5) {
//         n_m_five += n_m / i;

//     }

//     cout << min(n_five - m_five - n_m_five, n_two - m_two - n_m_two);
// }