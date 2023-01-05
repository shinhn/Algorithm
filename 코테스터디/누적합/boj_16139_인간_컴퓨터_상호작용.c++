#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

/*
문자열의 길이가 최대 20만이고 문제의 수도 최대 20만개이다.
따라서 단순 반복문으로 특정 문자의 개수를 매번 구하면 20만 x 20만 이므로 시간초과가 날 수 있다.
-> 누적합을 이용하여 문자열을 입력 받을 때 각 문자가 몇개씩 나왔는지 구해놓자.
*/

string s;
int q;
int sum_s[26][200001]; // 문자열 s의 알파벳 별 누적합

void CountAlp(){
    // 알파벳 나올 때 1로 저장
    for(int i=0;i<s.size();i++){
        sum_s[s[i]-'a'][i] = 1; 
    }

    cout << "\n";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<26;j++){
            cout << sum_s[i][j] << " ";
        }
        cout << "\n";
    }

    // 누적합 만듦
    for(int i=1;i<s.size();i++){
        for(int j=0;j<26;j++){
            if(sum_s[j][i] == 1) sum_s[j][i] = sum_s[j][i-1] + 1;
            else sum_s[j][i] = sum_s[j][i-1];
        }
    }

    cout << "\n";
    for(int i=0;i<s.size();i++){
        for(int j=0;j<26;j++){
            cout << sum_s[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;
    
    CountAlp();

    cin >> q;
    for(int i=0;i<q;i++){
        char ch;
        int l, r;
        cin >> ch >> l >> r;

        if(l == 0){
            cout << sum_s[ch-'a'][r] << "\n";
        }
        else{
            cout << sum_s[ch-'a'][r] - sum_s[ch-'a'][l-1] << "\n";
        }
    }

    

    return 0;
}