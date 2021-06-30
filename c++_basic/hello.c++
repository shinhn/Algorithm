#include <iostream> // 전처리 지시자
/*
C언어의 printf() 함수나 scanf() 함수처럼 C++에서도 iostream 헤더 파일에 표준 입출력 클래스를 정의
C++에서는 cout 객체로 출력 작업을, cin 객체로 입력 작업을 수행하고 있다.

cf) 함수 드레그한 뒤, F12 누르면 함수 내용을 알 수 있음 
*/

using namespace std;

int main()
{
    cout << "Hello, World!" << endl;

    // << : data의 흐름이라고 생각하면됨
    // endl : 줄바꿈

    return 0;
}