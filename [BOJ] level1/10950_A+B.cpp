#include <iostream>
using namespace std;

int main()
{   
    int num1, num2;

    while(cin >> num1 >> num2)
    {
        cout << num1+num2 << '\n';
    }
}

/*
test case에 크기가 주어지지 않았으므로 while(1)처럼 무한루프로 수행할 경우
boj에서 "출력 초과"로 채점됨

(처음 시도한 코드)
int main()
{
    while(1)
    {
        int num1, num2;
        cin >> num1 >> num2;

        if(num1 < 0 || num1 > 10 || num2 < 0 || num2 > 10)break;

        cout << num1+num2 << '\n';
    }
}
*/