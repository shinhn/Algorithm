#include <iostream>
using namespace std;

struct Product{
    char name[5];
    int size;
    int price;
};

int main(){
    Product a,b;

    cin >> a.name;
    cin >> a.size;
    cin >> a.price;

    cin >> b.name;
    cin >> b.size;
    cin >> b.price;

    cout << a.name << "," << b.name << "\n";
    cout << "AverageSize=" << (a.size+b.size)/2 << "\n";
    cout << "AveragePrice=" << (a.price+b.price)/2 << "\n";

    return 0;
}