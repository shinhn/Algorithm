#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

struct Train { 
    int win; 
    char name[8];
};

Train train[7] = {
    {15, "summer"},
    {33, "cloe"},
    {24, "summer"},
    {28, "niki"},
    {32, "jenny"},
    {20, "summer"},
    {40, "coco"}
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name;
    int age;

    cin >> name;
    cin >> age;

    for(int i=0;i<7;i++){
        if(train[i].name == name && train[i].win == age) cout << i;
    }

    return 0;
}