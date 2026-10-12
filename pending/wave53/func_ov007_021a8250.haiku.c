#include "ffc/types.h"

extern void func_ov007_021a7b9c(void *obj);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2588(void *a, void *b);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c45dc[];
extern uint32_t data_ov007_021c46c4[];
extern uint32_t data_ov007_021c46cc[];

void func_ov007_021a8250(void *obj)
{
    uint8_t *s = (uint8_t *)obj;
    uint32_t blk[3];
    uint8_t r7;
    uint8_t *r6;
    uint8_t *r4;
    int got;
    void *p7;
    void *p6;
    void *t;

    func_ov007_021a7b9c(obj);
    r4 = *(uint8_t **)(s + 0xd4);
    r6 = r4 + 0x1c;
    r7 = r4[0x12];
    if (r7 != 0) {
        func_0208763c(r6);
    }
    got = (*(uint32_t *)(r4 + 0x14)) == 0;
    if (r7 != 0) {
        func_02087678(r6);
    }
    if (got) {
        got = 0;
        p7 = func_0205681c(0xc0);
        if (p7 != 0) {
            p7 = func_ov007_021a2588(p7, s + 0x14c);
        }
        *(void **)(s + 0x148) = p7;
        p6 = func_0205681c(0xa4);
        if (p6 != 0) {
            void *b = func_020159c8(data_020b8e44, 0x3a);
            func_02005988(&blk, b);
            p6 = func_02033094(p6, &blk, 1, data_ov007_021c45dc[7], data_ov007_021c45dc[8], 4, 0);
            got = 1;
        }
        t = *(void **)(s + 0xd4);
        func_02056bc0(t, p6);
        func_02056bc0(t, p7);
        if (got) {
            func_020059cc(&blk);
        }
    }
    {
        uint32_t a0 = data_ov007_021c46c4[0];
        uint32_t a1 = data_ov007_021c46c4[1];
        *(uint32_t *)(s + 0xb8) = a0;
        *(uint32_t *)(s + 0xbc) = a1;
    }
    {
        uint32_t c0 = data_ov007_021c46cc[0];
        uint32_t c1 = data_ov007_021c46cc[1];
        *(uint32_t *)(s + 0xc0) = c0;
        *(uint32_t *)(s + 0xc4) = c1;
    }
}
