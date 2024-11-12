#include <stdio.h>
int main() {
    int i, X;
    int maximum = -1000000000;
    int N;
    scanf("%d", &N);
    int a[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        if (a[i] > maximum) {
            maximum = a[i];
        }
    }

    for (i = 0; i < N; i++) {
        a[i] = maximum - a[i];
        printf("%d ", a[i]);
    }

    return 0;
}