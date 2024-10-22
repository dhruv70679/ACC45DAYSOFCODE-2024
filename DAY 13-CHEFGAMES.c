#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int i = 0; i < T; i++) {
        int R1, R2, R3, R4;
        // Read the decisions of the referees
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);

        // Check if all referees consider the ball to be IN (i.e., all R's should be 0)
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }

    return 0;
}
