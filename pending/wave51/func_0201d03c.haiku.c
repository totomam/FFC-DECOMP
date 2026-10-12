#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *b;
    uint32_t c;
    uint8_t d;
} Local;

extern uint32_t func_02036c10(void *p);
extern void func_02018b3c(Local *out, void *src, uint32_t index);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02036cb4(void *p, uint32_t v);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern void *data_020b8e44;

uint32_t func_0201d03c(uint8_t *self, uint32_t index) {
    Local l;
    uint32_t r;

    r = func_02036c10(*(uint8_t **)(self + 0x40) + (index << 4));
    if (r == 0x7fff) {
        func_02018b3c(&l, data_020b8e44, index);
        r = *(uint16_t *)((uint8_t *)func_02052d90(l.b, l.c) + 0x12);
        func_02036cb4(*(uint8_t **)(self + 0x40) + (index << 4), r);
        if (l.b == 0) {
            goto done;
        }
        if (l.d != 0) {
            func_02052d3c(l.b, l.c);
        }
        func_02052c04(l.b);
    }
done:
    if (r == 0x7fff) {
        func_02053290(&l);
    }
    return r;
}
