#include <iostream>
using namespace std;

struct NODE{
    int age;
    NODE *next1, *next2;
};

int main(){
    
    NODE *head, simson, woman1, woman2;

    head = &simson;

    simson.next1 = &woman1;
    simson.next2 = &woman2;

    return 0;
}