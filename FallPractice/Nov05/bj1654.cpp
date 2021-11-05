// bj1654 - 랜선 자르기
#include <iostream>  
#include <vector> 
#include <algorithm>
using namespace std;

vector<int> v;
int K, N, temp; 

bool isPossible(int mid) {
    int cnt = 0;

    for (int i = 0; i < v.size(); i++) {
        cnt += (v[i] / mid);
    }

    if (cnt >= N) {
        return true;
    }
    else {
        return false;
    }
}

int main() { 
    
    
    cin >> K >> N;

    long long right = 0;
    long long left = 1;

    for (int i = 0; i < K; i++) {
        cin >> temp;

        if (temp > right) right = temp;

        v.push_back(temp);
    }

    long long result = 0;
 
    while(left <= right) {
        
        long long mid = (left + right) / 2;

        if (isPossible(mid)) {  // 조건 만족하면 자르는 전선의 길이를 늘림 
            if (mid > result) {
                result = mid;
            }
            left = mid + 1; 
        }
        else {  // 조건 만족하지 않으면 전선의 길이를 줄임 
            right = mid - 1;
        }
    }
    
    cout << result;

} 

// right = 가장 긴 전선, left = 1로 둔다. 
// mid로 잘랐을 때 N개 이상 나온다면 (조건 o) 전선의 길이를 늘림
// mid로 잘랐을 때 N개 보다 모자른다면 (조건 x) 전선의 길이를 줄임 
 







// 매개변수 탐색 Parametric Search
// 이분 탐색이랑 비슷 (응용)
// 0. 최적화 문제를 결정 문제로 풀 수 있는 기술 
// 0-1. 최적화 문제 : 어떤 알고리즘의 최적 솔루션을 찾아내는 것
// 0-2. 결정 문제  : 답이 이미 결정되어있다고 보고 문제를 푸는 것 
// 1. 결정 문제로 풀면 쉽게 문제를 풀 수 있을 때
// 2. 어떤 시점까지는 조건을 만족하지만 그 후로는 조건을 만족하지 않는 경우, 조건을 만족하는 최대값 찾기
// 3. 반대로 어떤 시점까지는 조건을 만족하지 않지만 그 후로는 조건을 만족하는 경우, 조건을 맍고하는 최소값 찾기
// : 어떤 조건을 만족하는 위치 중에 가장 큰 or 작은 위치는 ?


// https://annajeong.github.io/algorithm/parametric/