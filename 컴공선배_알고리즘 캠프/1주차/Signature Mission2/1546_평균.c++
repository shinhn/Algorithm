#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int score[N];
    for(int i=0;i<N;i++){
        cin >> score[i];
    }

    int max_score = *max_element(score, score+N);
    double avg = 0;
    for (int i = 0; i < N; i++)
    {
        avg += double(score[i]) / max_score * 100;
    }

    cout.precision(3);
    cout << fixed;

    cout << avg/N;

    return 0;
}