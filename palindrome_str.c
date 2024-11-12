#include <stdio.h>

int main() {
    int cnt = 0;
    int f = 0;
    char S[1001];
    fgets(S, sizeof(S), stdin);

    for (int i = 0; S[i] != '\0'; i++) {
        cnt = i;
    }
    for (int i = 0, j = cnt - 1; i <= j; i++, j--) {
        if (S[i] != S[j]) {
            f = 1;
        }
    }
    if (f == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
