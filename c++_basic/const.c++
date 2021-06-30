#include <iostream>

using namespace std;

int main()
{   // const : 상수 정의
    // 1. 바뀔 필요가 없는 수
    // 2. 바뀌어서는 안되는 수

    const float PIE = 3.141592;

    int r = 3;
    float s = r * r * PIE;
    cout << s;
}

