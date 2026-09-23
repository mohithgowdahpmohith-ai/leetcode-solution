#include <stdio.h>
#include <string.h>

char *longestCommonPrefix(char strs[][20], int strsSize) {
    if (strsSize == 0) return "";

    char *prefix = strs[0];
    int prefixLen = (int)strlen(prefix);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixLen && strs[i][j] == prefix[j]) {
            j++;
        }
        prefixLen = j;
        if (prefixLen == 0) break;
    }

    static char result[20];
    strncpy(result, prefix, prefixLen);
    result[prefixLen] = '\0';
    return result;
}

int main() {
    char strs[][20] = {"flower", "flow", "flight"};
    int strsSize = 3;

    printf("Longest common prefix: %s\n", longestCommonPrefix(strs, strsSize));
    return 0;
}
