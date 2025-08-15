#include <stdio.h>

    void mostFrequent(int array[], int size, int *value, int *count) {
    *count = 0;
    for (int i = 0; i < size; i++) {
        int tempCount = 0;
        for (int j = 0; j < size; j++) {
            if (array[j] == array[i]) {
                tempCount++;
            }
        }
        if (tempCount > *count) {
            *count = tempCount;
            *value = array[i];
        }
    }
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
    int value, count;
    mostFrequent(array, size, &value, &count);
    printf("Phan tu xuat hien nhieu nhat: %d\n", value);
    printf("So lan xuat hien: %d\n", count);
    return 0;
}
