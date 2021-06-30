#include <iostream>
#include <cstring> // strlen()

using namespace std;

int main()
{
    char str1[15];
    char str2[15] = "C++programing";

    // cin : 공백을 null('\0')과 마찬가지로 취급하여 문자열을 구분하기 때문에 공백을 포함한 문자열을 입력할 수 없음
    // cin >> str1;

    // cin.getline(char[], size) : 공백을 포함한 문자열 입력 가능
    cin.getline(str1, 15);
    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;


    str2[3] = '\0'; // 3번 인덱스 요소를 null로 하여 이전까지 문자들만 출력
    cout << "str2 : " << str2 << endl;


    // string

    // 배열은 하나의 배열을 다른 배열에 통으로 대입할 수 없지만
    /*
    char char1[20];
    char char2[20] = "hello";
    char1 = char2 -> False
    */

    // string은 하나의 변수로 취급하여 가능
    string str3;
    string str4 = "hello";
    str3 = str4;
    cout << str3 << endl;
    
}