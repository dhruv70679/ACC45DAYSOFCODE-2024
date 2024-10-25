#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of problems
        
        // Initialize counters for the two contests
        int count_START38 = 0;
        int count_LTIME108 = 0;
        
        // Read the contest codes
        for (int i = 0; i < N; i++) {
            char contest_code[10];
            scanf("%s", contest_code); // Read the contest code
            
            // Increment the respective counter based on the code
            if (strcmp(contest_code, "START38") == 0) {
                count_START38++;
            } else if (strcmp(contest_code, "LTIME108") == 0) {
                count_LTIME108++;
            }
        }
        
        // Output the counts for the two contests
        printf("%d %d\n", count_START38, count_LTIME108);
    }
    
    return 0;
}

