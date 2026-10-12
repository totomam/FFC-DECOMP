#include "ffc/types.h"

typedef struct Node {
    uint16_t lo;
    uint16_t hi;
    uint32_t pad;
    struct Node *next;
} Node;

typedef struct Owner {
    uint8_t pad[0x10];
    Node *list;
} Owner;

extern int func_02078314(Node *n, uint32_t key);

int func_020783a4(Owner **pp, uint32_t key)
{
    Node *n = (*pp)->list;
    while (n != 0) {
        if (n->lo <= key && key <= n->hi) {
            return func_02078314(n, key);
        }
        n = n->next;
    }
    return 0xffff;
}
