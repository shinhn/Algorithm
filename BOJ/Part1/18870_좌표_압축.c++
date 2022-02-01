#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, num;
    cin >> N;

    vector<int> location;
    
    for(int i=0;i<N;i++){
        cin >> num;
        location.push_back(num);
    }

    vector<int> sort_location; // 정렬할 벡터 (원본 벡터를 복사하여 정렬)
    sort_location = location;

    // 오름차순 정렬
    sort(sort_location.begin(), sort_location.end());

    // 중복 제거
    sort_location.erase(unique(sort_location.begin(), sort_location.end()), sort_location.end());

    for (int i = 0; i < N; i++)
    {
        auto index = lower_bound(sort_location.begin(), sort_location.end(), location[i]); // lower_bound의 return 값은 주소값
        cout << index - sort_location.begin() << ' ';
    }

    return 0;
}