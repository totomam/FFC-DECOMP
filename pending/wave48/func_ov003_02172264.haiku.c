#include "ffc/types.h"

extern void func_02018644(void *out, void *arg);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern void func_020424e0(void *a);
extern void *func_ov003_0214d9c0(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov003_02171bdc(void *mem, void *a, uint16_t b, void *c);
extern uint32_t data_ov003_0217b6ac[2];
extern uint32_t data_ov003_0217b6b4[2];
extern void *data_020b8e44;

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov003_02172264(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t *st = *(uint32_t **)(p + 0x98);
    uint32_t buf[8];
    uint8_t *r6;
    uint16_t r4;
    void *x;
    void *al;
    void *r1v;

    if (*st == 2) {
        *(Pair *)(p + 0x80) = *(Pair *)data_ov003_0217b6ac;
        return;
    }
    if (*st == 3) {
        p[0x94] = 0;
        *st = 0;
    }

    if (p[0x94] != 0) {
        r6 = (uint8_t *)buf + 0x10;
        func_02018644(r6, data_020b8e44);
        func_02052d90(*(void **)(r6 + 4), *(uint32_t *)(r6 + 8));
        x = func_02052d90(*(void **)(r6 + 4), *(uint32_t *)(r6 + 8));
        r4 = *(uint16_t *)((uint8_t *)x + *(uint32_t *)((uint8_t *)x + 8));
        if (*(void **)(r6 + 4) != 0) {
            if (r6[0xc] != 0) {
                func_02052d3c(*(void **)(r6 + 4), *(void **)(r6 + 8));
            }
            func_02052c04(*(void **)(r6 + 4));
        }
        func_02053290(r6);
        p[0x94] = 0;
    } else {
        r6 = (uint8_t *)buf;
        func_02018644(r6, data_020b8e44);
        func_02052d90(*(void **)(r6 + 4), *(uint32_t *)(r6 + 8));
        x = func_02052d90(*(void **)(r6 + 4), *(uint32_t *)(r6 + 8));
        r4 = *(uint16_t *)((uint8_t *)x + *(uint32_t *)((uint8_t *)x + 8) + 2);
        if (*(void **)(r6 + 4) != 0) {
            if (r6[0xc] != 0) {
                func_02052d3c(*(void **)(r6 + 4), *(void **)(r6 + 8));
            }
            func_02052c04(*(void **)(r6 + 4));
        }
        func_02053290(r6);
    }

    func_020424e0(*(void **)(p + 0x88));
    x = func_ov003_0214d9c0();
    func_02056bc0(p + 0x14, x);
    al = func_0205681c(0x98);
    r1v = al;
    if (al != 0) {
        r1v = func_ov003_02171bdc(al, *(void **)(p + 0x88), r4, p + 0x90);
    }
    func_02056bc0(p + 0x14, r1v);
    *(Pair *)(p + 0x80) = *(Pair *)data_ov003_0217b6b4;
}
