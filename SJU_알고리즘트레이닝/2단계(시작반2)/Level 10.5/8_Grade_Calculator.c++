#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char Calculator(){
    int score;
    cin >> score;

    if(score >= 90) return 'A';
    else if(score >= 80) return 'B';
    else if(score >= 70) return 'C';
    else return 'D';
}

int main(){

    cout << Calculator();

    return 0;
}