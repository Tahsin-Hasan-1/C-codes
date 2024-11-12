#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int fa[100000 + 1] = {0};

    for (int i = 0; i < N; i++) {
        int t;
        scanf("%d", &t);

        fa[t]++;
    }

    int cnt = 0;
    for (int k = 1; k <= 100000; k++) {
        if (fa[k] == 1) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
