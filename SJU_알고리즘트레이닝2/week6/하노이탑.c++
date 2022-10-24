#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int> > vec;

void func(int num, int from, int by, int to){
    if(num == 1){
        vec.push_back(make_pair(from, to));
    }
    else{
        func(num-1, from, to, by);
        vec.push_back(make_pair(from, to));
        func(num-1, by, from, to);
    }
}

int main(){
    cin >> N;

    func(N, 1, 2, 3);

    cout << vec.size() << "\n";
    for(int i=0;i<vec.size();i++){
        cout << vec[i].first << " " << vec[i].second << "\n";
    }

    return 0;
}