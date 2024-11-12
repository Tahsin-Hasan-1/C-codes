#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, f;
    scanf("%d %d", &t, &f);
    int *p1 = &t;
    int *p2 = &f;
    printf("%d\n", abs(*p1 - *p2));
    return 0;
}