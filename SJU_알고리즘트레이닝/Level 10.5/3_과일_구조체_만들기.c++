#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Fruit{
    int size;
    int price;
};

int main(){

    Fruit banana, apple;
    cin >> banana.size >> apple.size;

    banana.price = 250*banana.size;
    apple.price = 500*apple.size;

    cout << banana.price + apple.price << "원";

    return 0;
}