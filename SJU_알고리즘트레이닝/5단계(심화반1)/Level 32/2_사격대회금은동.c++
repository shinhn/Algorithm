#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct player{
    string name;
    int score;
};

int N;
player arr[1000000], before[3];

void insert_sort(){
    int i, j;
    for(i=1;i<N;i++){
        player key = arr[i];

        for(j=i-1;j>=0;j--){
            if(arr[j].score < key.score){
                arr[j+1] = arr[j];
            }
            else break;
        }

        arr[j+1] = key;
    }
}

int main(){
    
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> arr[i].name >> arr[i].score;

        for(int j=0;j<i;j++){
            if(arr[i].score == arr[j].score){
                player tmp;
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }

        if(i>=3){
            for(int j=0;j<2;j++){
                before[j] = arr[j];
            }
        }

        insert_sort();

        if(i<=2){
            for(int j=0;j<3;j++){
                cout << arr[j].name << " ";
            }
            cout << "\n";
        }
        else{
            int cnt = 0;

            for(int j=0;j<3;j++){
                if(before[j].name == arr[j].name) cnt++;
            }
            
            if(cnt != 3){
                for(int j=0;j<3;j++){
                    cout << arr[j].name << " ";
                }
                cout << "\n";
            }
        }
    }



    return 0;
}