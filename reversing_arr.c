#include <stdio.h>

int main() {
    int A, B;
    int x;
    int f;
    scanf("%d %d", &A, &B);

    int found = 0;  // To check if any number meets the condition

    for (; A <= B; A++) {
        int i = A;
        f = 1;  // Assume the number is a lucky number unless proven otherwise

        // Check each digit of the current number
        while (i != 0) {
            x = i % 10;  // Get the last digit
            if (x != 4 && x != 7) {
                f = 0;  // If any digit is not 4 or 7, set the flag to 0
                break;
            }
            i /= 10;  // Remove the last digit
        }

        // If f == 1, it's a lucky number
        if (f == 1) {
            printf("%d ", A);
            found = 1;
        }
    }

    // If no lucky number was found
    if (found == 0) {
        printf("-1\n");
    }

    return 0;
}
