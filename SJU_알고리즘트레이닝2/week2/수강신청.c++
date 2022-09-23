#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int K, L;
map<string ,int> student; // key : 학번, value : 삽입 순서
vector<pair<int, string> > ans; // 삽입 순서, 학번

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K >> L;

    for(int i=0;i<L;i++){
        string str;
        cin >> str;

        student[str] = i; // key가 중복되는 경우 최신 i 값으로 수정 (insert 함수는 중복 될 수 있음)
    }

    for(map<string ,int>::iterator i = student.begin();i != student.end();i++){
        ans.push_back(make_pair(i->second, i->first));
    }

    // 수강 신청 순서 기준으로 정렬
    sort(ans.begin(), ans.end());

    // 수강 신청에 성공한 학생이 수강 가능 정원보다 적은 경우를 고려
    int num = min(int(ans.size()), K);

    for(int i=0;i<num;i++){
        cout << ans[i].second << "\n";
    }

    return 0;
}