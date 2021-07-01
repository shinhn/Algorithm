#include <iostream>

using namespace std;

#define SIZE 20

struct IM
{
    char name[20];
    int age;
};

int main()
{
    /*
    new 연산자

    어떤 데이터형을 원하는지 new 연산자에게 알려주면,
    new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고
    그 블록의 주소를 리턴한다.
    */

    int* p1 = new int;
    // 이전에는 int형 변수를 새로 선언하여 그변수의 주소를 pointer에 대입해줬지만, 그런 과정 없이 new연산자를 통해 알맞은 블록의 주소를 찾아 리턴



    /*
    delete 연산자

    사용한 메모리를 다시 메모리 폴로 환수
    환수된 메모리는 프로그램의 다른 부분으로 다시 사용
    */

    int* p2 = new int;
    delete p2;

    /*
    1. new로 대입하지 않은 메모리는 delete으로 해제할 수 없다
    2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
    3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
    */

    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    p3 = p3 + 1;
    cout << "p3[0] = " << p3[0] << endl;

    p3 = p3 - 1; // 다시 시작 위치를 지시해야 함
    delete[] p3;



    // 동적 배열
    char animal[SIZE]; // 컴파일 시간에 메모리 크기 정함
    char* p4;

    cout << "동물의 이름을 입력하시요 : ";
    cin >> animal;

    p4 = new char[strlen(animal) + 1]; // 실행 시간에 메모리 크기 정함 (훨씬 유리)
    strcpy(p4, animal);

    cout << "입력한 동물 이름 : " << animal << ", 그 주소는 : " << &animal << endl;
    cout << "복사한 동물 이름 : " << p4 << ", 그 주소는 : " << &p4 << endl;


    // 동적 구조체
    IM* p5 = new IM;

    cout << "이름 입력 : ";
    cin >> p5->name;

    cout << "나이 입력 : ";
    cin >> p5->age;

    cout << "입력된 이름 : " << p5->name << endl;
    cout << "입력된 나이 : " << p5 -> age << endl;
    
}