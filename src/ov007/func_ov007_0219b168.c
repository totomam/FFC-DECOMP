#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020692a4(void *object);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_020159c8(void *object, uint32_t v);
extern uint32_t func_0203bdf0(void *object, Pair pr, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0201af7c(void *object, uint32_t idx, void *out);
extern void func_02056bc0(void *object, void *node);
extern void func_020697ac(void *object, void *node);
extern void func_ov007_0219ae84(void *object);
extern void func_ov007_0219ad20(void *object);
extern uint8_t data_ov007_021c9700;
extern void *data_0213df18;
extern void *data_020b8e44;
extern void *data_020b93b8;

void func_ov007_0219b168(uint8_t *p)
{
    Pair pr;
    uint32_t out[11];
    uint32_t i;
    uint32_t r3;
    uint32_t r6;

    func_020692a4(*(void **)(p + 0xcc));
    p[0xd0] = 1;
    data_ov007_021c9700 = 1;
    pr.a = 0x65;
    pr.b = 0xb2;
    r6 = func_0204f7ec(data_0213df18);
    r3 = func_020159c8(data_020b8e44, 0xea);
    *(uint32_t *)(p + 0xd4) = func_0203bdf0(r6, pr, r3, 4, 0, 0);
    for (i = 0; i < 2; i++) {
        func_0201af7c(data_020b93b8, i, &out[0]);
        if (!(((out[5] << 30) >> 31))) {
            func_020692a4(*(void **)(p + 0xc0 + i * 4));
        }
    }
    func_02056bc0(p + 0x48, *(void **)(p + 0xd4));
    p[0xd8] = 1;
    func_020697ac(p, *(void **)(p + 0xc8));
    func_ov007_0219ae84(p);
    func_ov007_0219ad20(p);
}
