#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A[3][3] = {
    {2,6,3},
    {7,1,1},
    {3,4,2}
};

int B[2][4] = {
    {6,4,2,4},
    {1,1,5,8}
};

int C[2][3] = {
    {9,2,3},
    {4,2,1}
};

int main(){

    vector<int> A2;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            A2.push_back(A[i][j]);
        }
    }

    sort(A2.begin(), A2.end(), greater<int>());

    for(int i=0;i<3;i++){
        cout << A2[i] << " ";
    }
    cout << "\n";


    vector<int> B2;

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            B2.push_back(B[i][j]);
        }
    }

    sort(B2.begin(), B2.end());

    for(int i=0;i<3;i++){
        cout << B2[i] << " ";
    }
    cout << "\n";


    vector<int> C2;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            C2.push_back(C[i][j]);
        }
    }

    sort(C2.begin(), C2.end());

    for(int i=0;i<2;i++){
        cout << C2[i] << " ";
    }
    cout << C2[5] << "\n";

    return 0;
}