#include <stdio.h>

int main() {
    int N, M;
    int l = 1;
    int a[1001][1001];

    scanf("%d %d", &N, &M);

    if (N != M) {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &a[i][j]);

            if (i == j || i + j == N - 1) {
                if (a[i][j] != 1) {
                    l = 0;
                }
            } else {
                if (a[i][j] != 0) {
                    l = 0;
                }
            }
        }
    }

    if (l == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
