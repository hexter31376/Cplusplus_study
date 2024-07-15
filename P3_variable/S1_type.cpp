# include <iostream>
using namespace std;

// C++에는 다음과 같은 기본 형이 정의되어 있습니다.

int main () {
    // 문자형
    bool boolean = true; // 1바이트의 true ~ false or 0 ~ 1
    char charactor = 'a'; // 1바이트의 영숫자 1문자 -128 ~ 127 아스키 코드
    unsigned char unsignedCharactor = 'A'; // 1바이트의 1문자(부호 없음) 0 ~ 255
    // 정수형
    short int shortInteger = 32767; // 2바이트 -32768 ~ 32767 범위의 정수
    unsigned short unsignedShortInteger = 65535; // 2바이트 0 ~ 65535 범위의 정수
    int integer = 2147483647; // 2바이트 -2147483648 ~ 2147483647 범위의 2바이트 정수
    unsigned int unsignedIneteger = 4294967295; //  0 ~ 4294967295 범위의 정수
    long int longInteger;
    unsigned long unsignedLongInteger;
    // 부동 소수점
    float floating;
    double doubleFloating;
    long double longDoubleFloating;

    return 0;
}