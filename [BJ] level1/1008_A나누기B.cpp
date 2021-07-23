#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    cout << fixed; // 소수점을 고정시켜 표현
    cout.precision(15); // 15자리까지 표현
    cout << A/(double)B;
    
}
// cout << fixed 을 사용하지 않고 cout.precision(15)만 단독으로 사용하면 소수부분만이 아닌, 정수부분과 소수부분의 자리 크기를 모두 더한 값이 15가 되게 출력됨


// <double vs float>
// C++ 표준이 자료형의 최소크기만 정해놨기 때문에 개인 컴퓨터에서 float의 크기와 서버의 float크기가 다를 수 있고, 이 경우는 오버플로우가 발생할 수 있다.
// 그리고 double과 float은 엄청 다르다. 일반적으로 double은 float보다 2배 정도 더 정확하다. double은 15-16개의 10진수를, float은 7개의 10진수를 표현한다.
// double 쓰는게 좋을듯 싶다.