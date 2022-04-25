#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N, M;
int arr[500001], target[500001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> target[i];
    }
    
    int left, mid, right;
    bool flag;
    for(int i=0;i<M;i++)
    {
        left = 0;
        right = N-1;
        mid = (left+right)/2;
        flag = false;
        
        while(left<=right)
        {
            if(arr[mid] == target[i])
            {
                flag = true;
                break;
            }
            if (arr[mid] < target[i])
            {
                left = mid + 1;
                mid = (left + right)/2;
            }
            if (arr[mid] > target[i])
            {
                right = mid - 1;
                mid = (left + right) / 2;
            }
        }
        
        if(flag==true)cout << 1 << " ";
        else cout << 0 << " ";
    }

    return 0;
}