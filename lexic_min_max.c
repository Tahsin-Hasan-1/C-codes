#include <stdio.h>
#include <string.h>

int main() {
    char S1[1001];
    char S2[1001];
    char S3[1001];
    char max[1001];
    char min[1001];

    scanf("%s %s %s", S1, S2, S3);
    int x = strcmp(S1, S2);
    int c = strcmp(S1, S3);
    int v = strcmp(S2, S1);
    int b = strcmp(S2, S3);

    if (x > 0 && c > 0) {
        strcpy(max, S1);
    } else if (v > 0 && b > 0) {
        strcpy(max, S2);
    } else {
        strcpy(max, S3);
    }

    if (x < 0 && c < 0) {
        strcpy(min, S1);
    } else if (v < 0 && b < 0) {
        strcpy(min, S2);
    } else {
        strcpy(min, S3);
    }

    printf("%s\n", min);
    printf("%s\n", max);

    return 0;
}
