#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000

bool isValid(char *s) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        } else {
            if (top == -1) return false;

            char last = stack[top--];
            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {
    char s[] = "()[]{}";

    if (isValid(s)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }

    return 0;
}
