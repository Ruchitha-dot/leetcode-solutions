#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int main(void) {
    struct ListNode a = {1, NULL};
    struct ListNode b = {2, NULL};
    struct ListNode c = {3, NULL};
    struct ListNode d = {4, NULL};
    struct ListNode e = {5, NULL};

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    struct ListNode *slow = &a;
    struct ListNode *fast = &a;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("%d\n", slow->val);
    return 0;
}