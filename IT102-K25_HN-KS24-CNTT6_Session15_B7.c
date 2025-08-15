#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Nhap so can tim: ");
    scanf("%d", &target);
    int result = binarySearch(arr, size, target);
    if (result != -1) printf("Tim thay tai chi so %d\n", result);
    else printf("Khong tim thay\n");
    return 0;
}
