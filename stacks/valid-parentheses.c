#include <stdio.h>

int main(void) {
    char s[] = "({[]})";
    char stack[100];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                printf("Invalid\n");
                return 0;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                printf("Invalid\n");
                return 0;
            }
        }
    }

    printf("%s\n", top == -1 ? "Valid" : "Invalid");
    return 0;
}