#include <iostream>
using namespace std;

struct profile{
    char name[7];
    int age;
    int weight;
};

int main(){
    profile pr1, pr2;

    cin >> pr1.name >> pr1.age >> pr1.weight;
    cin >> pr2.name >> pr2.age >> pr2.weight;

    cout << pr1.name << " & " << pr2.name << "\n";
    cout << "평균" << (pr1.age + pr2.age)/2 << "세\n";
    cout << "평균" << (pr1.weight + pr2.weight)/2 << "KG\n";

    return 0;
}