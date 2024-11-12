#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);

    int fa[1001] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int t;
            scanf("%d", &t);
            fa[t]++;
        }
    }

    for (int k = 0; k < X; k++) {
        int s;
        scanf("%d", &s);
        printf("%d\n", fa[s]);
    }

    return 0;
}
