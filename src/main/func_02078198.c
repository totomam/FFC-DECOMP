#include "ffc/types.h"

typedef struct Node {
    uint32_t key;
    uint32_t a;
    uint32_t b;
    struct Node *next;
} Node;

uint32_t func_02078198(uint8_t *p, uint32_t key) {
    uint32_t *out = (uint32_t *)(p + 0x24);
    Node *n = (Node *)out[2];
    if (key != 0) {
        while (n != 0) {
            if (n->key == key) {
                break;
            }
            n = n->next;
        }
    }
    if (n == 0) {
        return 0;
    }
    out[0] = n->a;
    out[1] = n->b;
    out[2] = (uint32_t)n->next;
    return 1;
}
