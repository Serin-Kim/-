// bj10951 - A + B - 4
#include <iostream>
using namespace std;

int main() { 
    int A, B; 
    while(cin >> A >> B) {
        
        cout << A + B << endl;
    } 
}

// 입력에서 더 이상의 읽을 수 있는 데이터가 존재하지 않을 때 반복문을 종료
// 즉, 입력 스트림이 더 이상 읽을 것이 없는 파일의 끝에 도달했을 때 처리해야 함  
// 파일의 끝까지 읽고난 뒤 그 다음 파일을 읽으려할 때 데이터가 없을 때 EOF가 되는 것 (시점 정확히 파악해야 함)
// cin >> A >> B
// 보통 스트림 객체가 반환되지만, 조건문 안에 있는 경우 연산자 오버로딩에 의해 bool 값으로 true혹은 false 반환 
// 읽기 실패 시 false로 바뀌는 것 
// https://st-lab.tistory.com/257