#include <stdio.h>

void strConcat(char* str1, char* str2) {
    char* temp_str1 = str1;
    char* temp_str2 = str2;
    
    // str1 de '\0' a kadar ilerliyoruz
    while (*temp_str1 != '\0') {
        temp_str1++;
    }

    while (*temp_str2 != '\0') {
        *temp_str1 = *temp_str2; //ekleme
        temp_str1++;
        temp_str2++;
    }

    // Birleştirilen diziyi sonlandır
    *temp_str1 = '\0';
}

int main() {
    char str1[15] = "Hello";
    char str2[9] = ", World!";
    
    strConcat(str1, str2);

    printf("%s\n", str1);

    return 0;
}

