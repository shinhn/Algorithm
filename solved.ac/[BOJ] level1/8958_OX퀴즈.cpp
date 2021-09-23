#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int j=0 ; j<n ; j++)
    {
        string str;
        cin >> str;

        int score = 0, total_score = 0;
        for(int i=0 ; i<str.length() ; i++)
        {
            if(str[i] == 'O')
            {
                score += 1;
                total_score += score;
            }
            else 
            {
                score = 0;
            }
        }

        cout << total_score << '\n';
    }


}