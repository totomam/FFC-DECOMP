#include "ffc/types.h"

struct Node;
struct Node {
    uint8_t pad[0x68];
    struct Node *next;
};

struct Glob {
    uint8_t pad[0x24];
    struct Node *head;
};

extern struct Glob data_021414f4;

void func_02086c4c(struct Node *a) {
    struct Node *prev = 0;
    struct Node *cur = data_021414f4.head;
    while (cur != 0 && cur != a) {
        prev = cur;
        cur = cur->next;
    }
    if (prev == 0) {
        data_021414f4.head = a->next;
    } else {
        prev->next = a->next;
    }
}
