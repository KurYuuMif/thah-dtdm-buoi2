#include <stdio.h>
#include <math.h>

int KT_SCP(int num) {
    int canBacHai = sqrt(num);
    return (canBacHai * canBacHai == num);
}

void SCP(int n) {
    printf("\nCác số chính phương nhỏ hơn %d:\n", n);
    for (int i = 1; i * i < n; i++) {
        if (KT_SCP(i)) {
            printf("%d ", i * i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d\n", &n);
    SCP(n);
    return 0;
}