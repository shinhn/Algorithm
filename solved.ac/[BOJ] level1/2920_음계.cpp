#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[16];
    fgets(str, 16, stdin);

    if(strcmp(str, "1 2 3 4 5 6 7 8")==0) cout << "ascending";
    else if(strcmp(str, "8 7 6 5 4 3 2 1")==0) cout << "descending";
    else cout << "mixed";
}

/*
1. strcpm

정해진 문자열(1 2 3 4 5 6 7 8 / 8 7 6 5 4 3 2 1)인지 아닌지 판별하는 문제이므로
for 문으로 문자 하나씩 비교하는 것보다
strcpm 함수를 이용하는 것이 편리함

strcpm 함수의 인자는 string이 아닌 char형이 되어야 하므로 string으로 입력 받아 char형으로 변환해줘야 하는데
번거로우므로 처음부터 char형을 사용하였음

boj에서는 
#include <string> 를 사용하면 컴파일 에러 발생
-> #include <string.h> 로 수정하여 해결


2. gets

cin으로 문자열을 입력 받고 마지막에 개행('\n)을 입력 하면 개행까지가 문자열에 포함되므로
개행을 포함시키지 않기위해 gets로 문자열을 입력받음
(gets는 개행을 기준으로 입력받음)

-> 그러나 boj에서 컴파일 에러가 발생하여 gets 함수에 대해 알아보니 
c++ 14 이상부터는 gets가 사라졌다고 한다.
왜냐하면 buffer overflow을 유발하여 보안에 취약하므로 사용하지 않는 것을 권장하기 떄문이다.


3. fgets

gets 함수의 대체 함수로 fgets 사용
fgets(str, n, stdin)
str : 입력받을 문자열
n : 한번에 가지고올 문자열의 길이
stdin : 표준입력

*/