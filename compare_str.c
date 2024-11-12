#include <stdio.h>
#include <string.h>

int main() {
    char X[21];
    char Y[21];
    fgets(X, sizeof(X), stdin);
    fgets(Y, sizeof(Y), stdin);
    int com = strcmp(X, Y);
    if (com < 0) {
        printf("%s", X);
    } else if (com > 0) {
        printf("%s", Y);
    } else if (com == 0) {
        printf("%s", X);
    }

    return 0;
}
