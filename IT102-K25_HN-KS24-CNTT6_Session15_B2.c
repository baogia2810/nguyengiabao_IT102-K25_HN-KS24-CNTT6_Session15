#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Moi ban nhap so:");
    scanf("%d", &num);
    printf("%d\n", sumDigits(num));
    return 0;
}
