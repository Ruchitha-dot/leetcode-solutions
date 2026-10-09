#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char *ops[] = {"5", "2", "C", "D", "+"};
    int scores[100];
    int top = -1;

    for (int i = 0; i < 5; i++) {
        if (strcmp(ops[i], "C") == 0) {
            top--;
        } else if (strcmp(ops[i], "D") == 0) {
            scores[top + 1] = scores[top] * 2;
            top++;
        } else if (strcmp(ops[i], "+") == 0) {
            scores[top + 1] = scores[top] + scores[top - 1];
            top++;
        } else {
            scores[++top] = atoi(ops[i]);
        }
    }

    int total = 0;
    for (int i = 0; i <= top; i++) {
        total += scores[i];
    }

    printf("%d\n", total);
    return 0;
}
