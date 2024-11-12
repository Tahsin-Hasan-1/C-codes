#include <stdio.h>
#include <string.h>

int main() {
    int N, M;
    int l;
    int cn = 0;
    char a[101];
    char c[101];
    char r[101];

    scanf("%s %s %s", a, c, r);
    l = strlen(a);
    for (int i = 0; i < l; i++) {
        if (a[i] != c[i]) {
            cn++;
        }
        if (a[i] != r[i]) {
            cn++;
        }
    }
    printf("%d", cn);
    return 0;
}