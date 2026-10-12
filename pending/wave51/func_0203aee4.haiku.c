#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0203a368(void *a, void *b, uint32_t c, uint32_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j);
extern void func_020397d8(void *d, void *r, void *p);
extern uint8_t data_021395dc[];

void func_0203aee4(uint8_t *p) {
    void *r;
    if (p[0xf0] == 0) {
        p[0xf0] = 1;
        r = func_0205681c(0x9c);
        if (r != 0) {
            r = func_0203a368(r, p + 0x80,
                *(uint32_t *)(p + 0xf4), *(uint32_t *)(p + 0xf8),
                p[0x1bc], p[0x1bd], p[0x1be], p[0x1bf], p[0x1c0], p[0x1c8]);
        }
        func_020397d8(data_021395dc, r, p);
    } else {
        uint32_t *q = *(uint32_t **)(p + 0x1c4);
        if (q != 0) {
            *q = *(uint32_t *)(p + 0x8c);
        }
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
