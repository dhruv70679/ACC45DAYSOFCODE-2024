#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y; // Time taken by Bike and Car
        scanf("%d %d", &X, &Y);

        if (X < Y) {
            printf("BIKE\n");
        } else if (X > Y) {
            printf("CAR\n");
        } else {
            printf("SAME\n");
        }
    }

    return 0;
}
