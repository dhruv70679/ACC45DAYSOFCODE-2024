#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        scanf("%d", &N); // Read each value of N
        
        // Calculate the number of Tuesdays
        if (N < 2) {
            printf("0\n"); // If N is less than 2, no Tuesdays
        } else {
            int count_of_tuesdays = (N - 2) / 7 + 1;
            printf("%d\n", count_of_tuesdays);
        }
    }

    return 0;
}
