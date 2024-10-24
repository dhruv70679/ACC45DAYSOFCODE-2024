#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of terms in the polynomial
        int coefficients[N];

        // Read the coefficients
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }

        // Find the degree of the polynomial
        int degree = -1;
        for (int i = N - 1; i >= 0; i--) {
            if (coefficients[i] != 0) {
                degree = i; // The index of the first non-zero coefficient
                break;
            }
        }

        // Output the degree of the polynomial
        printf("%d\n", degree);
    }

    return 0;
}
