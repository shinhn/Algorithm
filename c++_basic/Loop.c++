#include <iostream>

using namespace std;

int main()
{
    // 증가 연산자(++), 감소 연산자(--)
    int a = 10;
    int b = 10;

    cout << "a++ : " << a++ << endl; // a++ : a를 판단하고 그다음 ++
    cout << "++b : " << ++b << endl; // ++b : ++하고 b를 판단 

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    // for문
    for(int i =0 ; i < 5 ; i++)
    {
        cout << i << endl;
    }
    cout << "\n";

    // while문
    // 조건 판단 후 {}수행
    string str = "panda";
    int j = 0;
    while(str[j] != '\0')
    {
        cout << str[j] << endl;
        j++;
    }
    cout << "\n";

    // do while문
    // do{}을 수행하고 조건 판단
    j=0;
    do
    {
        cout << str[j] << endl;
        j++;
    }
    while(str[j] != '\0');
    cout << "\n";

    // 반복문 활용 - 배열 기반 반복문
    int tmp[5] = {1,2,3,4,5};

    for(int i=0 ; i<5 ; i++)
    {
        cout << tmp[i];
    }
    cout << "\n";

    for(int i : tmp)
    {
        cout << i;
    }
    cout << "\n";

    int tmp2[10] = {1,2,3,4,5};
    for(int i : tmp2)
    {
        cout << i;
    }
    cout << "\n";

    // if / else

    // 논리 표현식
    /*
    1. 논리합 (or) : 둘 중 하나라도 T 이면 T 반환
    T || T -> T
    F || T -> T
    T || F -> T
    F || F -> F

    2. 논리곱 (and) : 모두 T 이면 T 반환
    T && T -> T
    F && T -> F
    T && F -> F
    F && F -> F

    3. 논리부정 연산자
    !(T) -> F
    !(F) -> T
    */

    // switch, break
    int c;
    cin >> c;

    switch (c)
    {
    case 1:
        cout << "1 입력됨 \n";
        break;
    
    case 2:
        cout << "2 입력됨 \n";
        break;

    case 3:
        cout << "3 입력됨 \n";
        break;

    default :
        cout << "1,2,3을 제외한 수 입력됨 \n";
        break;
    }

    // continue
    char line[20];
    int count=0;

    cin.get(line, 20);
    
    for (int i=0 ; line[i]!='\0' ; i++)
    {
        if(line[i] != ' ') continue;

        count++;
    }

    cout << "공백의 개수 : " << count;
}