#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<string> alps;

bool cmp(string str1, string str2){
    if(str1.length() < str2.length()){
        return true;
    }
    else if(str1.length() > str2.length()){
        return false;
    }
    else{ // 길이가 같은 경우, 사전순 정렬
        for(int i=0;i< str1.length();i++){
            if(str1[i] <= str2[i]) return true;
            else return false;
        }
    }

    return true;
}

int main(){

    cin >> N;

    for(int i=0;i<N;i++){
        string str;
        cin >> str;

        alps.push_back(str);
    }

    sort(alps.begin(), alps.end(), cmp);

    for(int i=0;i<N;i++){
        cout << alps[i] << "\n";
    }

    return 0;
}