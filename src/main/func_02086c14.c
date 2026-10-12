#include "ffc/types.h"

typedef struct Node {
    uint8_t pad0[0x68];
    struct Node *next;
    uint8_t pad1[4];
    uint32_t key;
} Node;

typedef struct Glob {
    uint8_t pad0[0x24];
    Node *head;
} Glob;

extern Glob data_021414f4;

void func_02086c14(Node *n) {
    Node *head = data_021414f4.head;
    Node *cur = data_021414f4.head;
    Node *prev = 0;
    while (cur != 0 && cur->key < n->key) {
        prev = cur;
        cur = cur->next;
    }
    if (prev == 0) {
        n->next = head;
        data_021414f4.head = n;
    } else {
        n->next = prev->next;
        prev->next = n;
    }
}
