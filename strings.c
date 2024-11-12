#include <stdio.h>

int main() {
    char A[11] = "tainaki";
    char B[11];
    int al = 0;
    int bl = 0;

    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    for (int i = 0; A[i] != '\0'; i++) {
        // if(A[i]=='\n'){
        //     break;
        // }
        al++;
    }

    // for (int i = 0; B[i] != '\0'; i++) {
    //     if (B[i] == '\n') {
    //         break;
    //     }
    //     bl++;
    // }
    printf("%s%s", A, B);

    return 0;
}
