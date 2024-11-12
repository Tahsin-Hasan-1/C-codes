#include <stdio.h>
int main() {
    char S[100001];
    fgets(S, sizeof(S), stdin);
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32;
        } else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32;
        } else if (S[i] == ',') {
            S[i] = ' ';
        }
    }
    puts(S);
    return 0;
}
