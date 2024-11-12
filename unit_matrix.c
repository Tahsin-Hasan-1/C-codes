#include <stdio.h>

int main() {
    int N;
    int f = 1;
    scanf("%d", &N);
    int a[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                if (a[i][j] != 1) {
                    f = 0;
                    break;
                }
            } else {
                if (a[i][j] != 0) {
                    f = 0;
                    break;
                }
            }
        }
        if (f == 0) break;
    }

    if (f == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
