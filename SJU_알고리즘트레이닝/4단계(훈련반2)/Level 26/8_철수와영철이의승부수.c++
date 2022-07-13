#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<char, pair<char, char>> tree;
vector<char> path;

tree['O'] = {'O','X'};

void preOrder(char ch){
    path.push_back(ch);

    if(path.size() == 3){


        return;
    }

    preOrder()
    
}

int main(){
    
    

    

    return 0;
}