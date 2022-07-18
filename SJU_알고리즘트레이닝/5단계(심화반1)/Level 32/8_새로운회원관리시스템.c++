#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

void print(string arr[]){
    for(int i=0;i<N;i++){
        cout << arr[i] << "\n";
    }
}

int main(){

    cin >> N;
    string arr[N];

    for(int i=0;i<N;i++){

        string str;
        cin >> str;

        int cnt = 0;
        for(int j=0;j<str.length();j++){
            if(str[j] >= 'a' && str[j] <= 'z') cnt++;
        }

        // 첫 글자 대문자이고, 나머지 소문자 --> 변경하지 않습니다.
        if(str[0] >= 'A' && str[0] <= 'Z' && cnt == str.length()-1){
            arr[i] = str;
            continue;
        }
        else if(cnt == str.length()){ // 소문자로만 이루어진 회원들 --> 첫 글자 대문자, 나머지 소문자로 아이디로 변경합니다.
            str[0] = char(str[0] - ('a'-'A'));
        }
        else{ // 그 밖에 대소문자가 섞여있는 회원들 --> 모두 대문자로 아이디를 변경합니다.
            for(int j=0;j<str.length();j++){
                if(str[j] >= 'a' && str[j] <= 'z'){
                    str[j] = char(str[j] - ('a'-'A'));
                }
            }
        }
        
        arr[i] = str;
    }

    sort(arr, arr+N);

    print(arr);

    

    return 0;
}