#include <stdio.h>

int main() {
    int N, M;
    int l = 1;
    int a[1001][1001];
    int c[101];
    int r[101];

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        c[i] = a[i][M - 1];
        a[i][M - 1] = a[i][0];
        a[i][0] = c[i];
    }

    for (int j = 0; j < M; j++) {
        r[j] = a[N - 1][j];
        a[N - 1][j] = a[0][j];
        a[0][j] = r[j];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}