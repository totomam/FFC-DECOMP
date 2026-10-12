#include "ffc/types.h"

extern uint32_t func_02077d10(uint8_t *q, void *node, uint32_t addr, uint32_t size, uint32_t zero);

typedef struct Node {
    uint32_t a;
    uint32_t size;
    uint32_t b;
    struct Node *next;
} Node;

uint32_t func_02077e0c(uint8_t *p, uint32_t size, uint32_t align) {
    Node *best = 0;
    uint32_t best_size = 0xFFFFFFFF;
    uint32_t best_addr = 0;
    uint8_t *q = p + 0x24;
    uint32_t r7 = 1;
    uint16_t f;
    Node *n;
    f = (uint16_t)(*(uint16_t *)(q + 0x12) & r7);
    if (f) {
        r7 = 0;
    }
    n = *(Node **)q;
    while (n != 0) {
        uint32_t base = (uint32_t)n + 0x10;
        uint32_t aligned = (base + (align - 1)) & ~(align - 1);
        uint32_t need = size + (aligned - base);
        if (n->size >= need) {
            if (best_size > n->size) {
                best_size = n->size;
                best = n;
                best_addr = aligned;
                if (r7 != 0 || n->size == size) {
                    break;
                }
            }
        }
        n = n->next;
    }
    if (best == 0) {
        return 0;
    }
    return func_02077d10(q, best, best_addr, size, 0);
}
