#include <iostream>

using namespace std;

void insertion_sort(int arr[], int N)
{
    int i, j;

    for (i = 1; i < N; i++)
    {
        int key = arr[i]; // 삽입할 요소

        for(j=i-1;j>=0;j--)
        {
            if(arr[j] > key) // 비교값이 key보다 클 경우 
            {
                arr[j+1] = arr[j]; // 해당 값을 한칸씩 뒤로 이동
            }
            else // 비교값이 key보다 작을 경우
                break; // 반복문 탈출
        }

        arr[j+1] = key; // 탈출한 j번째 요소 다음 순서에 key 삽입
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, N);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << '\n';
    }

    return 0;
}