#include <iostream>

using namespace std;

// 배열 : 같은 데이터형의 집합
// 구조체 : 다른 데이터형이 허용되는 집합

int main()
{
    // 구조체 선언
    struct player{
        string name;
        int height;
        int weight;
    };

    // 초기화
    player p1 = {
        "shinhyeon",
        165,
        55
    };

    cout << p1.name << endl;
    cout << p1.height << endl;
    cout << p1.weight << endl << endl;

    // 구조체 배열
    player pls[2] ={
        {"name1", 180, 80},
        {"name2", 170, 70}
    };

    cout << pls[0].name << endl;
    cout << pls[0].height << endl;
    cout << pls[0].weight << endl << endl;
    cout << pls[1].name << endl;
    cout << pls[1].height << endl;
    cout << pls[1].weight << endl;

}