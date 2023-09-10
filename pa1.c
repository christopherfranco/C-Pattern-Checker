#include"pa1.h"

int main(void) {
    char line[MAX_LENGTH];

    while (fgets(line, MAX_LENGTH, stdin)) {
        int len = strlen(line) - 1;
        line[len] = '\0';

        int patterns_found = 0;

        if (is_singleton(line)) {
            printf("singleton\n");
            patterns_found = 1;
        }
        if (is_arithmetic(line)) {
            printf("arithmetic\n");
            patterns_found = 1;
        }
        if (is_reverse_arithmetic(line)) {
            printf("reverse arithmetic\n");
            patterns_found = 1;
        }
        if (is_balanced_tripartite(line)) {
            printf("balanced tripartite\n");
            patterns_found = 1;
        }
        if (is_balanced_bipartite(line)) {
            printf("balanced bipartite\n");
            patterns_found = 1;
        }
        if (is_palindrome(line)) {
            printf("palindrome\n");
            patterns_found = 1;
        }

        if (!patterns_found) {
            printf("\n");
        }
    }

    return 0;
}


