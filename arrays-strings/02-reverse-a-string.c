#include <stdio.h>
#include <string.h>

void reverseString(char *s, int len) {
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    char s[] = "hello";
    int len = (int)strlen(s);

    reverseString(s, len);
    printf("Reversed string: %s\n", s);
    return 0;
}
