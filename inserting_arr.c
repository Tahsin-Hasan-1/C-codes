#include <stdio.h>
int main() {
    int a[10000];
    int l;
    scanf("%d", &l);
    for (int i = 0; i < l; i++) {
        scanf("%d", &a[i]);
    }

    l++;
    int b, c;
    scanf("%d %d", &b, &c);

    for (int i = l - 1; i >= b; i--) {
        a[i + 1] = a[i];
    }
    a[b] = c;
    for (int i = 0; i < l; i++) {
        printf("%d ", a[i]);
    }
    // printf("\n");
    // for (int i = 0; i < 5; i++) {

    // }
    return 0;
}