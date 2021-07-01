#include <iostream>

using namespace std;

// 함수와 배열
/*
const int SIZE = 8;

int sumArr_using_size(int*, int); // 매개변수의 디폴트를 정해두면 매개변수가 들어오지 않았을 경우를 대비할 수 있음 -> int sumArr_using_size(int*, int n = 1)
int sumArr_using_pointer(int*, int*);

int main()
{
    int arr[SIZE] = {1,2,3,4,5,6,7,8};
    int sum1 = sumArr_using_size(arr, SIZE);
    int sum2 = sumArr_using_pointer(arr, arr+8);

    cout << "배열의 총합1 : " << sum1 << endl;
    cout << "배열의 총합2 : " << sum2 << endl;
}

int sumArr_using_size(int* arr, int n)
{
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int sumArr_using_pointer(int* start, int* end)
{
    int sum = 0;
    for(int* i = start ; i != end ; i++)
    {
        sum += *i;
    }

    return sum;
}
*/




// 함수와 구조체
/*
struct TIME
{
    int hour;
    int min;
};

TIME sum(TIME*, TIME*);

int main()
{
    TIME day1 = {5,45};
    TIME day2 = {4,55};

    TIME total = sum(&day1, &day2);
    cout << total.hour << "h." << total.min << "m" << endl;
}

TIME sum(TIME* t1, TIME* t2)
{
    TIME total;

    total.min = (t1->min + t2->min) % 60;
    total.hour = (t1->hour + t2->hour) + (t1->min + t2->min) / 60;

    return total;
}
*/


// 재귀함수

/*
void count(int);

int main()
{
    count(5);
}

void count(int n)
{
    cout << n << "번째 호출" << endl;
    if(n>0)
    {
        count(n-1);
    }
}
*/

// 인라인 함수
/*
일반적인 함수 호출 : 함수의 주소로 점프
인라인 함수 호출 : 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입 (점프가 아닌 그에 대응하는 함수 코드로 대체)
-> 실행 속도 향상
-> 인라인 함수 코드가 복잡하다면 속도 향상이 미비해지기 때문에 프로그래머의 판단에 의해 사용
*/
/*
inline float squar(float x)
{
    return x * x;
}

int main()
{
    int a = 5;
    cout << "한 변의 길이가 " << a << "인 정사각형의 넓이?\n";

    float s = squar(a);
    cout << s << endl;
}
*/


// 참조 변수 (reference)
// 함수는 매개변수의 복사본을 가지고 기능을 수행함 -> 결과값을 return해주지 않으면 원본값은 변하지 않음
// 이때 참조 변수를 이용하면 굳아 return을 해주지 않아도 원본 변수를 다룰 수 있음
/*
void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main()
{
  int wallet1 = 100;
  int wallet2 = 200;

  cout << "최초 상태" << endl;
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl << endl;

  swapA(wallet1, wallet2);
  cout << "참조 교환 이후 상태\n";
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl << endl;

  swapB(&wallet1, &wallet2);
  cout << "포인터를 이용한 교환 이후 상태\n";
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl << endl;

  swapC(wallet1, wallet2);
  cout << "값을 이용한 교환 이후 상태\n";
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl << endl;
  return 0;
}

void swapA(int& a, int& b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

void swapB(int* a, int* b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void swapC(int a, int b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}
*/

// 오버로딩
// 여러 개의 함수를 같은 이름으로 연결한다.
// 매개 변수가 다르지만 같은 기능을 수행하는 함수들에 이용
/*
int sum(int, int);
float sum(float, float);

int main()
{
    int a, b;
    cout << "두 정수를 입력하라 : ";
    cin >> a >> b;
    cout << "두 정수의 합 : " << sum(a,b) << endl;

    float c, d;
    cout << "\n두 실수를 입력하라 : ";
    cin >> c >> d;
    cout << "두 실수의 합 : " << sum(c,d) << endl;
}

int sum(int a, int b)
{
    return a+b;
}

float sum(float a, float b)
{
    return a+b;
}
*/


// 템플릿
// 매개변수 데이터 형에 상관없이 여러가지 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
/*
template <class Any>
Any sum(Any, Any);

int main()
{
    int a = 3;
    int b = 4;
    cout << sum(a, b) << endl;

    float c = 1.1;
    float d = 2.4;
    cout << sum(c, d) << endl;

    // cout << sum(a, c) << endl; -> error -> 첫 매개변수가 a, int형이므로 class Any는 int형으로 설정되어 있는데 두번째 매개변수 b, float형이 대입되었으므로 에러
}

template <class Any>
Any sum(Any a, Any b)
{
    return a+b;
}
*/



// 두 매개변수 데이터 형이 다른 경우
/*
// 1. class Any를 한쪽에만 취해 error를 해결한다.
template <class Any>
Any sum(int, Any);

int main()
{
    int a = 3;
    float c = 1.1;
    cout << sum(a, c) << endl;
}

template <class Any>
Any sum(int a, Any b)
{
    return a+b;
}
*/

// 2. 오버로딩을 템플릿에 적용
template <class Any>
Any sum(Any, Any);

template <class Any>
Any sum(int, Any);

int main()
{
    int a = 3;
    int b = 4;
    // cout << sum(a, b) << endl; -> error -> 오버로딩의 조건 중, 상황에 따라 대응되는 함수는 오직 1개이어야 하는 조건에 맞지 않으므로 에러

    float c = 1.1;
    float d = 2.4;
    cout << sum(c, d) << endl;

    cout << sum(a, c) << endl;
}

template <class Any>
Any sum(Any a, Any b)
{
    return a+b;
}

template <class Any>
Any sum(int a, Any b)
{
    return a+b;
}
