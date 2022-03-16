#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book)
{
    bool answer = true;

    unordered_map<string, int> map;

    // map에 전화번호 저장
    for (int i = 0; i < phone_book.size(); i++)
    {
        map[phone_book[i]] = 1;
    }

    for (int i = 0; i < phone_book.size(); i++)
    {
        string number = "";
        for (int j = 0; j < phone_book[i].size(); j++)
        {
            number += phone_book[i][j];
            if (map[number] && number != phone_book[i])
                return false;
        }
    }

    return answer;
}