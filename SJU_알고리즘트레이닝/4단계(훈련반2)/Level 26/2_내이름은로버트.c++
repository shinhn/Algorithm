#include <iostream>
using namespace std;

struct robot{
    int a, b;
    string t;
};

int main(){
    
    robot robert;
    robot* p = &robert;

    cin >> robert.a >> robert.b;
    cin >> robert.t;

    cout << p->a + p->b << " " << p->t;


    return 0;
}