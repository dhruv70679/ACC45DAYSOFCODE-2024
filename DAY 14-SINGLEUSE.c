#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); // Read H, X, Y for each test case

        // Calculate attacks without special attack
        int attacksWithoutSpecial = (H + X - 1) / X;

        // Calculate attacks with special attack
        int remainingHealthAfterSpecial = H - Y;
        int attacksWithSpecial;

        if (remainingHealthAfterSpecial <= 0) {
            attacksWithSpecial = 1; // Only the special attack is needed
        } else {
            attacksWithSpecial = 1 + (remainingHealthAfterSpecial + X - 1) / X; // 1 for special + normal attacks
        }

        // Get the minimum of the two calculated attacks
        int minAttacks = attacksWithoutSpecial < attacksWithSpecial ? attacksWithoutSpecial : attacksWithSpecial;

        // Output the result for this test case
        printf("%d\n", minAttacks);
    }

    return 0;
}
