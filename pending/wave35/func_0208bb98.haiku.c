#include "ffc/types.h"

typedef struct Node {
    uint32_t pad[3];
    struct Node *next;
} Node;

extern void func_02088978(void);
extern void func_0208898c(void);

void func_0208bb98(Node **head, Node *target) {
    if (head != 0) {
        Node *cur;
        Node *prev;
        func_02088978();
        cur = *head;
        prev = cur;
        while (cur != 0) {
            if (cur == target) {
                Node *nx = cur->next;
                if (cur == prev) {
                    *head = nx;
                } else {
                    prev->next = nx;
                }
                break;
            }
            prev = cur;
            cur = cur->next;
        }
        func_0208898c();
    }
}
