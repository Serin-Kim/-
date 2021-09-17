// 14889 - 스타트와 링크
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int arr[21][21]; 
int visited[21];

int n, sum;
int ans = 987654321;

  


void teamset (int index, int cnt) {
    vector<int> start;
    vector<int> link;   
    int startScore = 0;
    int linkScore = 0;

    if (cnt == n / 2) {
        for (int i = 0; i < n; i++) {
            if (visited[i] == 1) {
                start.push_back(i);
            }
            else 
                link.push_back(i);
        }

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                startScore += arr[start[i]][start[j]];
                linkScore += arr[link[i]][link[j]];
            }
        } 
        if (abs(startScore - linkScore) < ans)
            ans = abs(startScore - linkScore);
 
         
        return;
    }

    for (int i = index; i < n; i++) {
        if (!visited[i]) { 
            visited[i] = 1;
            teamset (i, cnt + 1);
            visited[i] = 0;
        }
    }


}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j]; 
        }
    }

    teamset(0, 0);

    cout << ans << "\n";
}