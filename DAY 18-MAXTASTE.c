#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d; // Tastiness values of ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate possible tastiness values
        int tastiness1 = a + c; // A and C
        int tastiness2 = a + d; // A and D
        int tastiness3 = b + c; // B and C
        int tastiness4 = b + d; // B and D

        // Find the maximum tastiness
        int maxTastiness = tastiness1;
        if (tastiness2 > maxTastiness) maxTastiness = tastiness2;
        if (tastiness3 > maxTastiness) maxTastiness = tastiness3;
        if (tastiness4 > maxTastiness) maxTastiness = tastiness4;

        // Output the maximum tastiness
        printf("%d\n", maxTastiness);
    }

    return 0;
}
