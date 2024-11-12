#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, f;
    scanf("%d", &N);

    int *p = (int *)malloc(sizeof(int));

    for (int i = 0; i < N; i++) {
        scanf("%d", &f);

        p[i] = f;

        if (i < N - 1) {
            p = (int *)realloc(p, (i + 2) * sizeof(int));
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}
