#include <stdio.h>
int main() {
    int i, X;
    int N;
    scanf("%d", &N);
    int a[N];

    for (i = 1; i <= N; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &X);
    if (a[X] == 0) {
        a[X] = 1;
    } else if (a[X] == 1) {
        a[X] = 0;
    }

    for (i = 1; i <= N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}