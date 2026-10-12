#include "ffc/types.h"

typedef struct Node {
    uint32_t a;
    uint32_t size;
    uint32_t b;
    struct Node *next;
} Node;

typedef struct Pool {
    Node *head;
    uint8_t pad[0xe];
    uint16_t flags;
} Pool;

extern uint32_t func_02077d10(Pool *q, Node *node, uint32_t addr, uint32_t size, uint32_t zero);

uint32_t func_02077e0c(uint8_t *p, uint32_t size, uint32_t align) {
    Pool *q = (Pool *)(p + 0x24);
    Node *n;
    Node *best;
    uint32_t r7 = 1;
    uint32_t best_size;
    uint32_t best_addr;
    if ((uint16_t)(q->flags & r7)) {
        r7 = 0;
    }
    best = 0;
    best_size = 0xFFFFFFFF;
    best_addr = 0;
    for (n = q->head; n != 0; n = n->next) {
        uint32_t base = (uint32_t)n + 0x10;
        uint32_t aligned = (base + (align - 1)) & ~(align - 1);
        uint32_t need = size + (aligned - base);
        if (n->size >= need && best_size > n->size) {
            best_size = n->size;
            best = n;
            best_addr = aligned;
            if (r7 != 0 || n->size == size) {
                break;
            }
        }
    }
    if (best == 0) {
        return 0;
    }
    return func_02077d10(q, best, best_addr, size, 0);
}
