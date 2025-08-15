#include<stdio.h>
#include<math.h>
int effect(int a, int b) {
    return abs(a-b);
}
int accumulate(int a, int b) {
    return a*b;
}
int main() {
    int num1,num2;
    printf("Moi nhap so thu nhat:");
    scanf("%d",&num1);
    printf("Moi nhap so thu hai:");
    scanf("%d",&num2);
    int effectOn=effect(num1,num2);
    int accumulateMan=accumulate(num1,num2);
    printf("Hieu = %d\n",effectOn);
    printf("Tich = %d\n",accumulateMan);
    return 0;
}