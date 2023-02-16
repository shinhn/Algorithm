#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

/*
버리는 양을 최소화하기 위해서는 가장 작은 원소를 가장 큰 원소에 부어야 함
*/

int N;
vector<double> arr;

bool cmp(double a, double b){
    return a > b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i=0;i<N;i++){
        double n;
        cin >> n;
        arr.push_back(n);
    }

    sort(arr.begin(), arr.end(), cmp);
    
    while(arr.size()>1){
        double tmp = arr[arr.size()-1] / 2; // 가장 작은 원소를 절반으로 나눠
        arr[0] += tmp; // 제일 큰 원소에 더해준다
        arr.pop_back(); // 가장 작았던 원소 제거
    }

    cout << arr[0] << '\n';

    return 0;
}