#include "ffc/types.h"

extern void func_ov007_021acafc(void *a);
extern void func_0201f7fc(void *a, uint32_t b, void *c);
extern void *func_0205681c(uint32_t size);
typedef struct { uint32_t x, y; } Pair;
extern void *func_02031624(void *a, void *b, Pair p, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void func_02031754(void *a, int b, void *c);
extern void *func_020059cc(void *object);
extern uint32_t func_ov007_021ac8e8(void *a, Pair p);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov007_021c5300;

void func_ov007_021ac7e0(uint8_t *a, uint32_t b)
{
    int i;
    void *pp;
    void *r4;
    void *t;
    uint32_t r;
    uint8_t local38[0x40];
    uint8_t local2c[12];
    uint8_t local20[12];
    Pair params;

    if (b == *(uint32_t *)(a + 0xbc)) {
        func_ov007_021acafc(a);
        return;
    }
    pp = a;
    i = 0;
    pp = a + 0xf8;
    for (; i < 5; i++) {
        if (b == *(uint32_t *)(a + 0xc0 + i * 4)) {
            *(a + 0xf4) = *(uint8_t *)(*(uint32_t *)(a + 0xe8) + (i + *(a + 0xfc) * 5));
            *(uint32_t *)(a + 0xf8) = 0;
            func_0201f7fc(data_020b93b8, a[0xf4], local38);
            r4 = func_0205681c(0x118);
            if (r4 != 0) {
                params.x = 0x80;
                params.y = 0x60;
                r4 = func_02031624(r4, pp, params, 0, 0, 0);
            }
            t = func_020159c8(data_020b8e44, 0x47);
            func_02005988(local2c, t);
            func_02031754(r4, 1, local2c);
            func_020059cc(local2c);
            t = func_020159c8(data_020b8e44, 0x49);
            func_02005988(local20, t);
            func_02031754(r4, -2, local20);
            func_020059cc(local20);
            r = func_ov007_021ac8e8(a, data_ov007_021c5300);
            func_02056bc0(a + 0x14, r4);
            func_02056bc0(a + 0x14, (void *)r);
        }
    }
}
