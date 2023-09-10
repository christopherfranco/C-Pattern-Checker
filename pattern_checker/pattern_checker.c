
#include <string.h>

int is_singleton(char str[]) {
    char first_letter = str[0];
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != first_letter) {
            return 0;
        }
    }
    return 1;
}

int is_arithmetic(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[0] + i) {
            return 0;
        }
    }
    return 1;
}

int is_reverse_arithmetic(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[0] - i) {
            return 0;
        }
    }
    return 1;
}

int is_balanced_tripartite(char str[]) {
    int length = strlen(str);
    if (length % 3 != 0) {
        return 0;
    }
    int part_length = length / 3;

    for (int i = 0; i < part_length; i++) {

        if (str[i] != str[i + part_length] || str[i] != str[i + 2 * part_length]) {
            return 0;
        }

    }

    return 1;
}

int is_balanced_bipartite(char str[]) {
    int length = strlen(str);
    if (length % 2 != 0) {
        return 0;
    }
    int half_length = length / 2;

    for (int i = 0; i < half_length; i++){

        if (str[i] != str[half_length + i]){
            return 0;
        }

    }
    
    return 1;
}

int is_palindrome(char str[]) {

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {

        if (str[i] != str[length - i - 1]) {
            return 0;
        }

    }

    return 1;
}


