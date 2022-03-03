#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> arr;
int tmp[1000001];

void merge(int left, int mid, int right)
{
    int x = left, y = mid + 1, k = left;

    while(x <= mid || y <= right)
    {
        if(x <= mid && y <= right)
        {
            if(arr[x] <= arr[y]) tmp[k] = arr[x++];
            else tmp[k] = arr[y++];
        }
        else if(x <= mid && y > right)
        {
            tmp[k] = arr[x++];
        }
        else if (x > mid && y <= right)
        {
            tmp[k] = arr[y++];
        }

        k++;
    }

    for(int i=left;i<=right;i++)
    {
        arr[i] = tmp[i];
    }
}

void mergeSort(int left, int right)
{
    if(left >= right) return;

    int mid = (left + right) / 2;
    // 분할
    mergeSort(left, mid);
    mergeSort(mid + 1, right);
    // 합병
    merge(left, mid, right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    mergeSort(0, N-1);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}