#include <iostream> // c++의 기본 입출력 함수는 iostream 라이브러리를 이용합니다.
#include <stdio.h> // c++은 c의 확장판 개념이므로 당연히 기존 C언어의 라이브러리도 사용 가능합니다.

using namespace std; // iostream의 std 네임스페이스를 현재 레벨로 가져옵니다. 함수 바깥쪽 선언이므로 전역으로 적용됩니다.

int main () {
    cout << "Hello World!" << endl; // cout '객체'를 통한 표준 출력을 진행

    printf("Hello World!"); // C와 혼용하여 사용할 수 있음을 알려주는 printf
    return 0; // main 함수의 종료 선언
}