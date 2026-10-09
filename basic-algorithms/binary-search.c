#include <stdio.h>

int main(void) {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int left = 0;
    int right = 5;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            printf("%d\n", mid);
            return 0;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("-1\n");
    return 0;
}
