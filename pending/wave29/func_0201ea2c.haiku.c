#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint8_t rest[0x24];
} Elem;

typedef struct {
    uint8_t pad[0x38];
    uint32_t key;
} Inner;

typedef struct {
    uint8_t pad[0x3c];
    Inner *in;
} Outer;

typedef struct {
    uint8_t pad[4];
    int32_t count;
    uint32_t off;
} Req;

void *func_0201ea2c(Outer *p, Req *r) {
    int32_t i = r->count - 1;
    uint16_t key;
    Elem *base;
    if (i >= 0) {
        base = (Elem *)((uint8_t *)r + r->off);
        key = (uint16_t)p->in->key;
        do {
            if (base[i].b <= key) {
                return &base[i];
            }
            i--;
        } while (i >= 0);
    }
    return 0;
}
