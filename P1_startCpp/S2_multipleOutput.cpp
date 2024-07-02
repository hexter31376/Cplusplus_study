#include <iostream> // c++의 기본 입출력 함수는 iostream 라이브러리를 이용합니다.

using namespace std; // iostream의 std 네임스페이스를 현재 레벨로 가져옵니다. 함수 바깥쪽 선언이므로 전역으로 적용됩니다.

int main () {
    int age = 23;
    char name[30] = "WONYOUNGJANG";

    // 스트림 연산자를 통해 다양한 입출력을 연속적으로 받을 수 있습니다.
    cout << "Hello World!\n" << "my name is : " << name << "\n" << "im " << age << " year old"<< endl;

    return 0; // main 함수의 종료 선언
}