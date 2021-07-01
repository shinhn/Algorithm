#include <iostream>

using namespace std;

/*
    c++
    객체지향 프로그래밍의 특징 : 컴파일 시간이 아닌 실행 시간에 특정 결정을 내릴 수 있다.

    ex) 배열 크기
    재래적 절차 프로그래밍 : 배열의 크기를 미리 결정
    객체지향 프로그래밍 : 배열의 크기를 실행 시간에 결정 => 배열의 크기를 변수로 할 수 있음 (상황에 맞게 배열 크기를 조절할 수 있다.)
*/

/*
int *a; -> c style
int* a; -> c++ style
(둘중 무엇이든 상관없음)

int* a, b; -> a는 포인터, b는 int형 변수
*/

int main()
{
    int a = 6;
    int* b;

    b = &a;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    cout << "&a : " << &a << endl;
    cout << "*b : " << *b << endl;

    *b = *b + 1;
    cout << "*b = *b + 1 -> a = " << a << endl;
}