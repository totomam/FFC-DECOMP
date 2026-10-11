#include "ffc/types.h"

extern void *func_020513f0(void *a, void *b, uint32_t c, void *d);

typedef struct {
    uint32_t a;
    uint32_t b;
} Node;

void func_020513c4(void **out, Node *s, uint16_t *key) {
    uint8_t *node = (uint8_t *)func_020513f0(s, key, s->b, &s->b);
    if (node == (uint8_t *)&s->b || *key < *(uint16_t *)(node + 0xc)) {
        *out = &s->b;
        return;
    }
    *out = node;
}
