#include <stdio.h>

int main() {
    printf("Các số nguyên có 2 chữ số và là bội của 7:\n");
    
    for (int i = 10; i <= 99; i++) {
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}