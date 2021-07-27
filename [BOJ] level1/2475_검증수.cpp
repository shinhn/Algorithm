#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int num;
    num = int(pow(n1,2) + pow(n2,2) + pow(n3,2) + pow(n4,2) + pow(n5,2)) % 10;
    cout << num;
}
    // cpp에서 나머지 연산자 (%)은 int or long 와 같은 정수형 자료에만 사용 가능하다.
    // 정수 (n1 ~ n5)를 제곱하여 더한 수도 정수라고 생각해서 형변환을 따로 해주지 않았더니 error가 발생했었고,
    // 연산 값을 int형으로 변환 후 '% 10'을 해주니 해결