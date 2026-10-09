#include <stdio.h>

int main(void) {
    int n = 4;
    int a = 0;
    int b = 1;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }

    printf("%d\n", b);
    return 0;
}