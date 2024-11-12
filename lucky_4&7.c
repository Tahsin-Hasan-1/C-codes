#include <stdio.h>
int main() {
    int A, B;
    int f = 0;
    int t = 0;

    int x, z;
    scanf("%d %d", &A, &B);
    for (; A <= B; A++) {
        int i = A;
        while (i != 0) {
            x = i % 10;
            if (x != 4 && x != 7) {
                f = 1;
                break;
            }
            z = i / 10;

            i = z;
        }
    }
    if (f == 0) {
        printf("%d ", A);
        t = 1;
    }
    if (t == 0) {
        printf("-1");
    }
    return 0;
}