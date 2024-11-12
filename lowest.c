#include <stdio.h>

int main() {
    int m, k, p, sum = 0;

    scanf("%d", &m);
    for (int i = 0; i < 5; i++) {
        k = m % 10;
        sum += k;
        p = m / 10;
        k = p;
    }
    printf("%d", sum);

    return 0;
}
