#include "ffc/types.h"

typedef struct {
    uint32_t x0;
    uint32_t x1;
    uint32_t x2;
    uint32_t x3;
    uint32_t x4;
} Sub;

void func_0207960c(uint8_t *p) {
    uint32_t base = (uint32_t)p;
    uint8_t *e = p + *(uint16_t *)(p + 0xc);
    int i;
    if ((int)*(uint16_t *)(p + 0xe) <= 0) return;
    for (i = 0; i < *(uint16_t *)(p + 0xe); i++) {
        uint32_t tag = *(uint32_t *)e;
        if (tag > 0x434d4150) {
            if (tag > 0x43574448) {
                if (tag == 0x46494e46) {
                    Sub *s = (Sub *)(e + 8);
                    s->x2 += base;
                    if (s->x3 != 0) s->x3 += base;
                    if (s->x4 != 0) s->x4 += base;
                }
            } else if (tag == 0x43574448) {
                Sub *s = (Sub *)(e + 8);
                if (s->x1 != 0) s->x1 += base;
            }
        } else if (tag == 0x434d4150) {
            Sub *s = (Sub *)(e + 8);
            if (s->x2 != 0) s->x2 += base;
        } else if (tag == 0x43474c50) {
        }
        e += *(uint32_t *)(e + 4);
    }
}
