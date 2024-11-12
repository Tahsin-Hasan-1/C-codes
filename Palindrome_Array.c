#include <stdio.h>
int main() {
    int N, i, j;
    int f = 0;
    scanf("%d", &N);

    int A[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (i = 0, j = N - 1; i <= j; i++, j--) {
        if (A[i] != A[j]) {
            f = 1;
        }
    }
    if (f == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}