#include <ctype.h>  // For isalpha()
#include <stdio.h>

int main() {
    int T;

    // Take number of test cases as input
    scanf("%d", &T);
    getchar();  // Clear the newline character after reading T

    for (int i = 0; i < T; i++) {
        char S[10000];
        int cnt = 0;

        // Read the string input
        fgets(S, sizeof(S), stdin);

        // Manually remove the newline character if it exists
        for (int j = 0; S[j] != '\0'; j++) {
            if (S[j] == '\n') {
                S[j] = '\0';  // Replace newline with null terminator
            }
        }

        // Manually count the characters in the string (excluding '\n')
        for (int j = 0; S[j] != '\0'; j++) {
            cnt++;
        }

        // If string length is <= 10, print the whole string
        if (cnt <= 10) {
            printf("%s", S);  // Print the whole string
        } else {
            // Print first character, number of characters in between, and last character
            printf("%c%d%c", S[0], cnt - 2, S[cnt - 1]);
        }

        printf("\n");  // Print newline for the next test case
    }

    return 0;
}
