#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int n; // Number of movies
        scanf("%d", &n);
        
        int L[n], R[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &L[i]); // Movie lengths
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &R[i]); // Movie ratings
        }

        int best_index = -1;
        int max_value = 0; // This is Li * Ri
        int max_rating = 0; // Best rating encountered so far

        for (int i = 0; i < n; i++) {
            int current_value = L[i] * R[i];
            // Check if we found a better movie
            if (current_value > max_value ||
                (current_value == max_value && R[i] > max_rating) ||
                (current_value == max_value && R[i] == max_rating && (best_index == -1 || i < best_index))) {
                best_index = i;
                max_value = current_value;
                max_rating = R[i];
            }
        }

        // Output the index of the best movie, converting to 1-based index
        printf("%d\n", best_index + 1);
    }
    
    return 0;
}
