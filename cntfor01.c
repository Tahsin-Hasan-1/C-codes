#include <stdio.h>
int main() {
    int zcnt = 0, ocnt = 0;
    int N;
    scanf("%d", &N);
    int a[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);

        if (a[i] == 0) {
            zcnt++;
        }
        if (a[i] == 1) {
            ocnt++;
        }
    }

    printf("%d %d", zcnt, ocnt);
    return 0;
}