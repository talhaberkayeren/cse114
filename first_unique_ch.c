/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
Input: s = "leetcode"  Output: 0
Input: s = "loveleetcode"  Output: 2
Input: s = "aabb"   Output: -1
*/
#include <stdio.h>

int firstUniqChar(char* s) {
    char* temp_s = s;
    
    while (*temp_s != '\0') {
        int counter = 0;
        char* temp_s_back = s;

        while (*temp_s_back != '\0') {
            if (*temp_s_back == *temp_s) {
                counter++;
            }

            if (counter > 1) {
                break;
            }

            temp_s_back++;
        }

        if (counter == 1) {
            return temp_s - s;
        }

        temp_s++;
    }

    return -1;
}
