#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

// Function to check if two strings are anagrams
int areAnagrams(const char *s1, const char *s2) {
    // Check if the lengths of the strings are different
    if (strlen(s1) != strlen(s2)) {
        return 0; // Not anagrams
    }

    int count[MAX_CHAR] = {0}; // Array to store character frequencies

    // Increment the count for characters in the first string
    for (int i = 0; s1[i] != '\0'; i++) {
        count[s1[i]]++;
    }

    // Decrement the count for characters in the second string
    for (int i = 0; s2[i] != '\0'; i++) {
        count[s2[i]]--;
    }

    // Check if all counts are zero
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}

int main() {
    const char *s1 = "listen";
    const char *s2 = "silent";

    if (areAnagrams(s1, s2)) {
        printf("%s and %s are anagrams.\n", s1, s2);
    } else {
        printf("%s and %s are not anagrams.\n", s1, s2);
    }

    return 0;
}

