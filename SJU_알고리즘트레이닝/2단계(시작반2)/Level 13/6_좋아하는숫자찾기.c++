#include <iostream>
using namespace std;

int arr[2][6] = {
    {4,5,6,1,3,1},
    {2,1,3,6,3,6}
};

void Input(int *a, int *b, int *c){
    cin >> *a >> *b >> *c;
}

void Process(int a, int b, int c, int *r1, int *r2, int *r3){
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            if(arr[i][j] == a) *r1 = *r1+1;
            if(arr[i][j] == b) *r2 = *r2+1;
            if(arr[i][j] == c) *r3 = *r3+1;
        }
    }
}

void Output(int a, int b, int c, int r1, int r2, int r3){
    cout << a << "=" << r1 << "개\n";
    cout << b << "=" << r2 << "개\n";
    cout << c << "=" << r3 << "개\n";
}

int main(){
    int a,b,c, r1=0, r2=0, r3=0;
    Input(&a, &b, &c);
    Process(a, b, c, &r1, &r2, &r3);
    Output(a, b, c, r1, r2, r3);


    return 0;
}