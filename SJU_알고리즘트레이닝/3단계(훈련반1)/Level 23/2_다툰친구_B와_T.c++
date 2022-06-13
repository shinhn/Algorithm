#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string str;
vector<char> path;
int cnt;
int type; // B와 T가 모두 있는 경우 : 1, 이외의 경우 : 2

bool isNear(char ch, int idx){ // ch : 추가할 문자, idx : 추가할 위치
    if(idx > 0 && path[idx-1] == ch) return true;
    return false;
}

void func(int depth){
    if(depth == 4){
        cnt++;
        return;
    }

    for(int i=0;i<4;i++){
        if(type == 1 && (str[i] == 'B' || str[i] == 'T') && isNear(str[i], path.size())) continue;
        path.push_back(str[i]);
        func(depth+1);
        path.pop_back();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> str;

    // B와 T 모두 있는지 확인 -> type 부여
    int t=0;
    for(int i=0;i<str.size();i++){
        if(str[i] == 'B') t++;
        if(str[i] == 'T') t++;
    }
    if(t == 2) type = 1;
    else type = 2;

    func(0);

    cout << cnt << "\n";
    
    return 0;
}