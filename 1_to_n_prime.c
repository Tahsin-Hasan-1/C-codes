#include <math.h>
#include <stdio.h>

int main() {
    int N, i;

    // Take user input
    scanf("%d", &N);

    // Loop through all numbers from 2 to N
    for (i = 2; i <= N; i++) {
        int f = sqrt(i);  // Calculate square root of the current number i
        int isPrime = 1;  // Assume i is prime

        // Loop to check divisibility up to the square root of i
        for (int j = 2; j <= f; j++) {
            if (i % j == 0) {  // If divisible by j, i is not prime
                isPrime = 0;   // Set isPrime to 0 (not prime)
                break;         // Break out of the loop as no need to check further
            }
        }

        // If the number is still prime after checking divisors, print it
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");  // Newline for better output formatting
    return 0;
}
