#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char s[] = "A man, a plan, a canal: Panama";
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        if (!isalnum((unsigned char)s[left])) {
            left++;
        } else if (!isalnum((unsigned char)s[right])) {
            right--;
        } else {
            if (tolower((unsigned char)s[left]) !=
                tolower((unsigned char)s[right])) {
                printf("Not a palindrome\n");
                return 0;
            }
            left++;
            right--;
        }
    }

    printf("Palindrome\n");
    return 0;
}