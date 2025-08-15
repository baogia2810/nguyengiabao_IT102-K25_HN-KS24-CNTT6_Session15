#include <stdio.h>

int sum(int array[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}

int main() {
    int size;
    printf("Nhap so phan tu: ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Tong la: %d\n", sum(array, size));
    return 0;
}
