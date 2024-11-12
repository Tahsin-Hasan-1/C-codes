#include <stdio.h>
int main() {
    int f[100] = {0};
    char q[11] = {'t', 'a', 'h', 's', 'i', 'n', 'h', 'a', 's', 'a', 'n'};
    for (int i = 0; i < 10; i++) {
        char c = q[i];
        int in = c - 'a';
        // printf("%d\n", in);
        f[in] = 1;
    }
    for (int i = 0; i < 12; i++) {
        printf("%d\n", f[i]);
    }
    return 0;
}