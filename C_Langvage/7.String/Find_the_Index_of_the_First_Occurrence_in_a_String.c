#include <stdio.h>

int strStr(char* haystack, char* needle) {
    if (needle[0] == '\0') return 0;

    for (int i = 0; haystack[i] != '\0'; i++) {
        int j;
        for (j = 0; needle[j] != '\0'; j++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (needle[j] == '\0') {
            return i;
        }
    }
    return -1;
}

int main() 
{
    char haystack1[] = "sadbutsad";
    char needle1[] = "sad";
    int result1 = strStr(haystack1, needle1);
    printf("Output for haystack1: %d\n", result1); // Expected output: 0

    char haystack2[] = "leetcode";
    char needle2[] = "leeto";
    int result2 = strStr(haystack2, needle2);
    printf("Output for haystack2: %d\n", result2); // Expected output: -1

    return 0;
}
