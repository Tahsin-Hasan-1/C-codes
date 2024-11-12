#include <stdio.h>
int main() {
    int X;
    scanf("%d", &X);
    if (X == 1) {
        printf("NO");
        return 0;
    }
    for (int i = 2; i <= (X / 2); i++) {
        if (X % i == 0) {
            printf("NO");
            return 0;
        }
        printf("YES\n");

        return 0;
    }