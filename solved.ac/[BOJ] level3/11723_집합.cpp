#include <iostream>
using namespace std;

/*
처음에 다른 문제에 비해 메모리 제한이 4MB로 매우 적어 기존에 사용하던 배열이나 벡터로는 풀 수 없다고 판단했었으나
문제 조건을 자세히 보니 1<= x <=20 인데 x가 있는지 없는지만 체크하면 되는 문제이므로
x값 자체를 굳이 다 넣어주지 않고 x가 있는지 없는지(true or false)만 배열에 넣어주면 될꺼 같음
*/

string cmd;
int x;
bool S[21] = {false};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    
    while (N > 0)
    {
        N--;

        cin >> cmd;
        if (cmd == "add")
        {
            cin >> x;
            S[x] = true;
        }
        else if (cmd == "check")
        {
            cin >> x;
            cout << S[x] << '\n';
        }
        else if (cmd == "remove")
        {
            cin >> x;
            S[x] = false;
        }
        else if (cmd == "toggle")
        {
            cin >> x;
            if (S[x] == true)
                S[x] = false;
            else
                S[x] = true;
        }
        else if (cmd == "all")
        {
            for (int i = 1; i <= 20; i++)
            {
                S[i] = true;
            }
        }
        else if (cmd == "empty")
        {
            for (int i = 1; i <= 20; i++)
            {
                S[i] = false;
            }
        }
    }
}