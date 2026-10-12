#include "ffc/types.h"

extern void func_ov007_021acafc(void *a);
extern void func_0201f7fc(void *a, uint32_t b, void *c);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void func_02031754(void *a, int b, void *c);
extern void *func_020059cc(void *object);
extern uint32_t func_ov007_021ac8e8(void *a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c5300[2];

typedef struct { uint32_t x, y; } Pair;

void func_ov007_021ac7e0(uint8_t *a, uint32_t b)
{
    uint32_t i;
    void *r4;
    void *t;
    uint32_t r;
    uint8_t local2c[8];
    uint8_t local20[8];
    uint8_t local38[0x50];
    Pair params;

    if (b == *(uint32_t *)(a + 0xbc)) {
        func_ov007_021acafc(a);
        return;
    }
    for (i = 0; i < 5; i++) {
        if (b == *(uint32_t *)(a + 0xc0 + i * 4)) {
            *(a + 0xf4) = ((uint8_t *)*(void **)(a + 0xe8))[*(a + 0xfc) * 5 + i];
            *(uint32_t *)(a + 0xf8) = 0;
            func_0201f7fc(data_020b93b8, a[0xf4], local38);
            r4 = func_0205681c(0x118);
            if (r4 != 0) {
                params.x = 0x80;
                params.y = 0x60;
                r4 = func_02031624(r4, a + 0xf8, 0x80, 0x60, 0, 0, 0);
            }
            t = func_020159c8(data_020b8e44, 0x47);
            func_02005988(local2c, t);
            func_02031754(r4, 1, local2c);
            func_020059cc(local2c);
            t = func_020159c8(data_020b8e44, 0x49);
            func_02005988(local20, t);
            func_02031754(r4, -1, local20);
            func_020059cc(local20);
            r = func_ov007_021ac8e8(a, data_ov007_021c5300[0], data_ov007_021c5300[1]);
            func_02056bc0(a + 0x14, r4);
            func_02056bc0(a + 0x14, (void *)r);
        }
    }
}
