#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string quiz;
        cin >> quiz;
        int answer = 0, tmp=0;
        for (int j = 0; j < quiz.length(); j++)
        {
            if(quiz[j] == 'O'){
                tmp++;
                answer += tmp;
            }
            else{
                tmp = 0;
            }
        }
        cout << answer << "\n";
    }

    return 0;
}