#include "ffc/types.h"

extern uint32_t func_02071170(void *a, uint32_t b);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t *d;
} Elem;

uint32_t func_020711c4(void *p, uint32_t idx) {
    Elem *e = (Elem *)(*(uint8_t **)((uint8_t *)p + 0x14) + idx * 0x1c);
    if (e->c == 0) {
        return 0;
    }
    return func_02071170(p, *(uint32_t *)(e->d + (e->b << 4) + 0xc));
}
