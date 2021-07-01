#include <iostream>

using namespace std;

int main()
{
    /*
    // union (공용체)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

    union un
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    un test;

    // intVal 대입
    test.intVal = 1;
    cout << test.intVal << endl << endl;

    // longVal 대입
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl << endl;

    // floatVal 대입
    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl << endl;

    // 단점 : 여러가지 데이터형을 다룰 수 있지만 동시에 다룰 수 없다.
    // 장점 : 메모리 절약
    */



    // enum (열거체)
    
    enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    // 1. spectrum을 새로운 데이터형 이름으로 만듦.
    // 2-1. red, orange, yellow, ... 원소(열거자)들을 0에서부터 7까지 각각 정수 값을 나타내는 기호 상수로 만듦.
    // 2-2. 정수 값을 명시해줄 수도 있음 -> enum spectrum {red=4, orange=3, yellow=0, green=2, blue=1, violet=5, indigo=7, ultraviolet=6};

    spectrum a = orange;
    cout << a << endl << endl;
    // 열거자가 정수 값을 나타내지만 산수 연산은 불가능

    // but 정수형 변수로 선언한다면 산수 연산 가능
    int b = blue + 3;
    cout << b << endl;

}
