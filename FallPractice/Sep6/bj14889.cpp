// 14889 - 스타트와 링크
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
 
int n;
int answer = 987654321;
int people[21][21];
int visited[21];

void divide (int cnt, int index) {

    vector<int> start;
    vector<int> link;
    int startScore = 0;
    int linkScore = 0;

    if (cnt == n / 2) {
        for (int i = 0; i < n; i++) {
            if (visited[i] == 1) 
                start.push_back(i);
            else 
                link.push_back(i);
        }

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                startScore += people[start[i]][start[j]];
                linkScore += people[link[i]][link[j]];
            }
        }

        int temp = abs(startScore - linkScore);
        if (answer > temp)
            answer = temp;
        
        return;
    }

    for (int i = index; i < n; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            divide(cnt + 1, i);
            visited[i] = 0;
        }
    }
}


int main() {
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> people[i][j];
        }
    }

    divide(0, 0);

    cout << answer << "\n";
}