#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int price, coin = 0;
    cin >> price;

    price = 1000 - price;

    while (price != 0)
    {
        if (price >= 500)
        {
            coin += price / 500;
            price = price % 500;
        }
        if (price >= 100)
        {
            coin += price / 100;
            price = price % 100;
        }
        if (price >= 50)
        {
            coin += price / 50;
            price = price % 50;
        }
        if (price >= 10)
        {
            coin += price / 10;
            price = price % 10;
        }
        if (price >= 5)
        {
            coin += price / 5;
            price = price % 5;
        }
        else{
            coin += price;
            price = price % 1;
        }
    }

    cout << coin << "\n";

    return 0;
}