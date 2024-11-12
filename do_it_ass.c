#include <stdio.h>
int main() {
    int N, K;
    scanf("%d", &N);
    scanf("%d", &K);
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}