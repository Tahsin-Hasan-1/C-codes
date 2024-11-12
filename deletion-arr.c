#include <stdio.h>
int main() {
    int l;
    scanf("%d", &l);

    int a[l];
    for (int i = 0; i < l; i++) {
        scanf("%d", &a[i]);
    }
    int c;
    scanf("%d", &c);

    for (int i = c + 1; i < l; i++) {
        a[c] = a[c + 1];
    }
    l--;

    for (int i = 0; i < l; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}