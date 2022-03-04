#include <iostream>
#include <algorithm>
#include <random>
#define MAX 1000001

using namespace std;

int N;
int arr[MAX];

void quick_sort(int start, int end)
{
    int pivot = arr[start];
    int left = start+1;
    int right = end;

    if(start >= end) return;

    while(1)
    {
        while (left <= right && arr[left] <= pivot)
        {
            left++;
        }
        while (left <= right &&  arr[right] >= pivot)
        {
            right--;
        }
        if(left > right) break;
        swap(arr[left], arr[right]);
    }

    // 위 반복문 마지막에 left와 right가 ++ 되어 위치가 역전되었으므로 start와 right의 원소를 바꿔줌
    swap(arr[start], arr[right]);
    // pivod(start->right)은 제 위치에 있으므로 pivot을 제외한 왼쪽 배열과 오른쪽 배열을 각각 다시 퀵 정렬
    quick_sort(start, right-1); 
    quick_sort(right+1, end);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // 배열 랜덤으로 섞기
    random_device rd;
    mt19937 g(rd());
    shuffle(arr, arr+N, g);

    quick_sort(0, N-1);

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}