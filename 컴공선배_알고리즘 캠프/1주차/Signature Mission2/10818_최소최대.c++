#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    cout << *min_element(arr, arr+N) << "\n";
    cout << *max_element(arr, arr + N) << "\n";

    return 0;
}