#include <stdio.h>

#define ll long long
int main() {
    int N;
    int k;
    int Min = __INT_MAX__;
    // int v = -1;
    scanf("%d", &N);

    int A[N];
    int i = 0;

    for (i; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int j = N - 1; j >= 0; j--) {
        printf("%d ", A[j]);
    }
    return 0;
}
