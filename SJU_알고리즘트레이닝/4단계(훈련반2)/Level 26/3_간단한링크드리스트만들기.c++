#include <iostream>
using namespace std;

struct NODE{
    int x;
    NODE *next;
};

int main(){
    
    NODE a, b, c;
    a.next = &b;
    b.next = &c;


    return 0;
}