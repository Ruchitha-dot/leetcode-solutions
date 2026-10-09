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

    struct ListNode *prev = NULL;
    struct ListNode *curr = &a;

    while (curr != NULL) {
        struct ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    struct ListNode *temp = prev;
    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }

    printf("\n");
    return 0;
}