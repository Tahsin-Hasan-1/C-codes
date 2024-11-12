#include <stdio.h>

int main() {
    int N, M, sum = 0;

    while (scanf("%d %d", &N, &M) != EOF) {
        if (N <= 0 || M <= 0) {
            return 0;
        }
        if (N > M) {
            int temp;
            temp = N;
            N = M;
            M = temp;
        }
        for (N; N <= M; N++) {
            sum += N;
            printf("%d ", N);
        }
        printf("sum =%d", sum);
        printf("\n");
        sum = 0;
    }

    return 0;
}
