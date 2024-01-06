#include <stdio.h>

int strFinder(char* str1, char* str2) {
    int is_find = 0;
    char* temp_str2 = str2;

    while (*str1 != '\0') {
        if (*str1 == *temp_str2) {
            char* temp_str1 = str1;
            
            while (*temp_str1 == *temp_str2 && *temp_str2 != '\0' && *temp_str1 != '\0') {
                temp_str1++;
                temp_str2++;
            }

            if (*temp_str2 == '\0') {
                is_find++;
                break;
            } else {
                temp_str2 = str2;
                str1++;
            }
        } else {
            str1++;
        }
    }

    return is_find;
}

int main() {
    char str1[20] = "I love Yeditepe";
    char str2[20] = "love Ya";

    if (strFinder(str1, str2)) {
        printf("Substring found.\n");
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
