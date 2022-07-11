#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
vector<char> month;
vector<char> day;
int ans=1;

int main(){
    
    cin >> str;

    int pos_1 = str.find(".");
    int pos_2 = str.find(".", pos_1+1);

    for(int i=pos_1+1;i<pos_2;i++){
        month.push_back(str[i]);
    }

    for(int i=pos_2+1;i<str.length();i++){
        day.push_back(str[i]);
    }

    if(month.size() == 1){ // 1~9 월
        if(month[0] == 'X') ans *= 9;
    }
    else{
        if(month[0] == 'X' && month[1] == 'X') ans *= 3; // 10 ~ 12 월
        if(month[0] != 'X' && month[1] == 'X') ans *= 3; // 10 ~ 12 월
        if(month[0] == 'X' && month[1] != 'X') ans *= 1; // 10, 11, 12 월
    }

    if(day.size() == 1){ // 1~9 일
        if(day[0] == 'X') ans *= 9;
    }
    else{ 
        if(day[0] == 'X'){
            if(day[1] == 'X') ans *= 22; // 10 ~ 31 일
            else{
                if(day[1] == '0' || day[1] == '1') ans *= 3; // 30, 31 일
                else ans *= 2; // 1x, 2x 일
            }
        }
        else{
            if(day[1] == 'X'){
                if(day[0] == '1' || day[0] == '2') {
                    ans *= 10; // 10 ~ 29 일
                }
                if(day[0] == '3') ans *= 2; // 30, 31 일
            }
        }
    }

    cout << ans;

    return 0;
}