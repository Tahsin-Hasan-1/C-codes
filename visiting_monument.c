#include <stdio.h>
void k(int x, int y) {
    if (y == x) {
        return;
    }
    printf("%d ", y);
    k(x, y + 1);
}
void L(int x, int y) {
    if (x == 0) {
        return;
    }
    printf("%d ", x);
    L(x - 1, y);
}

int main() {
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        k(N, 1);
        L(N, 1);
        printf("\n");
    }
    return 0;
}