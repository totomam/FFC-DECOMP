#include "ffc/types.h"

typedef struct Node {
    uint32_t pad[6];
    uint32_t key;
    uint32_t pad2;
    struct Node *next;
} Node;

typedef struct Owner {
    uint8_t pad[0x5c4];
    Node *head;
} Owner;

uint32_t func_ov001_0217b82c(Owner **pp, Node **out, uint32_t key) {
    Node *n = (*pp)->head;
    while (n != 0) {
        if (n->key == key) {
            if (out != 0) {
                *out = n;
            }
            return 1;
        }
        n = n->next;
    }
    if (out != 0) {
        *out = 0;
    }
    return 0;
}
