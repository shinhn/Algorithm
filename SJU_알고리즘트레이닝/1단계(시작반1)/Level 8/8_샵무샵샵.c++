#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char arr[6] = {'#','_','#','_','#','#'};

int main(){

    for(int i=0;i<6;i++){
        if(arr[i] == '#') cout << "샵";
        if(arr[i] == '_') cout << "무";
    }

    return 0;
}