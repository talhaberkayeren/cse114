#include <stdio.h>

int strStr(char* haystack, char* needle) {
    char* temp_needle = needle;
    char* temp_haystack = haystack;

    while (*temp_haystack != '\0') {
        if (*temp_needle == *temp_haystack) {
            char* temp_haystack_backup = temp_haystack;

            while (*temp_needle != '\0') {
                if (*temp_needle != *temp_haystack) {
                    temp_haystack = temp_haystack_backup + 1;
                    temp_needle = needle;
                    break;
                } else {
                    temp_haystack++;
                    temp_needle++;
                }
            }

            if (*temp_needle == '\0') {
                return (temp_haystack_backup - haystack);
            }
        } else {
            temp_haystack++;
        }
    }

    return -1;
}
 
