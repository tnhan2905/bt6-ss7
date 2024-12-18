#include <stdio.h>

int main() {
    int mang[5] = {11, 7, 30, 1, 18}; 
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            mang[i] += 3;
        } else {
            mang[i] += 2; 
        }
    }
    printf("Mang moi sau khi thay doi: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
