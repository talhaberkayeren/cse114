#include <stdio.h>

void strConcat(char* str1, char* str2) {
    char* temp_str1 = str1;
    char* temp_str2 = str2;
    
    // İlk dizede '\0' karakterini bulana kadar ilerle
    while (*temp_str1 != '\0') {
        temp_str1++;
    }

    // İkinci dizede '\0' karakterini bulana kadar ilerle
    while (*temp_str2 != '\0') {
        *temp_str1 = *temp_str2; // Karakteri kopyala
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

