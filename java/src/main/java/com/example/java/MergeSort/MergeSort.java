package com.example.java.MergeSort;

public class MergeSort {
    private static int[] sorted;	// 합치는 과정에서 정렬하여 원소를 담을 임시배열

    public static void main(String[] args) {
        int[] arr = {2,4,1,6,5};

        merge_sort(arr, 0, arr.length - 1);

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    // Top-Down 방식 구현
    private static void merge_sort(int[] a, int left, int right) {

        if(left == right) return;

        int mid = (left + right) / 2;	// 절반 위치

        merge_sort(a, left, mid);		// 절반 중 왼쪽 부분리스트(left ~ mid)
        merge_sort(a, mid + 1, right);	// 절반 중 오른쪽 부분리스트(mid+1 ~ right)

        merge(a, left, right);		// 병합작업

    }

    private static void merge(int[] a, int left, int right) {

        int[] sorted = new int[a.length];

        int mid = (left + right)/2;
        int l = left;		// 왼쪽 부분리스트 시작점
        int r = mid + 1;	// 오른쪽 부분리스트의 시작점
        int idx = left;		// 채워넣을 배열의 인덱스

        while(l <= mid && r <= right) {

            if(a[l] <= a[r]) {
                sorted[idx] = a[l];
                idx++;
                l++;
            }
            else {
                sorted[idx] = a[r];
                idx++;
                r++;
            }
        }

        if(l > mid) {
            while(r <= right) {
                sorted[idx] = a[r];
                idx++;
                r++;
            }
        }

        else {
            while(l <= mid) {
                sorted[idx] = a[l];
                idx++;
                l++;
            }
        }

        for(int i = left; i <= right; i++) {
            a[i] = sorted[i];
        }
    }
}
