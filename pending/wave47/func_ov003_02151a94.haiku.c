#include "ffc/types.h"

extern void func_ov003_02151464(uint8_t *p);
extern uint32_t func_02056dd4(uint8_t *p);
extern void func_0201cf34(uint32_t obj, uint8_t *buf);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov003_0215168c(uint8_t *p, uint8_t *buf);
extern uint32_t func_0205e7ac(uint32_t h);
extern uint32_t func_0205e7a8(uint32_t h);
extern uint32_t func_0205da88(uint32_t h);
extern void func_02058318(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov003_021516d4(uint8_t *p, uint32_t a);
extern void func_ov003_02151fa8(uint8_t *p, uint32_t a, uint32_t b);
extern void func_ov003_021515b8(uint8_t *p);

extern uint32_t data_ov003_02179d90[];
extern uint32_t data_0213df20;
extern uint32_t data_020b93b8;
extern uint32_t data_ov003_02179db8[];

typedef struct {
    uint32_t v1;
    uint32_t v2;
    uint32_t pad;
    uint8_t loc14[0x44];
    uint8_t loc58[0x98];
} Locals;

uint8_t *func_ov003_02151a94(uint8_t *p, uint32_t unused, uint32_t a, uint32_t b)
{
    Locals L;
    uint32_t old;
    uint32_t r;

    func_ov003_02151464(p);
    *(uint32_t *)p = (uint32_t)data_ov003_02179d90;
    *(uint32_t *)(p + 0xa4) = 0;
    r = func_02056dd4(p);
    old = data_0213df20;
    data_0213df20 = r;

    if (a != 0) {
        func_0201cf34(data_020b93b8, L.loc58);
        *(uint32_t *)(p + 0xa8) = (*(uint32_t *)(L.loc58 + 0x1c) << 0x19) >> 0x1e;
        func_02086ad4(L.loc14, (uint32_t)data_ov003_02179db8, a);
        func_ov003_0215168c(p, L.loc14);

        if (b != 0) {
            L.v1 = func_0205e7ac(*(uint32_t *)(p + 0x80));
            func_02058318(L.v1, func_0205da88(func_0205e7a8(*(uint32_t *)(p + 0x80))), 0x14, 0, 0, -1);
        }
        func_ov003_021516d4(p, a);
        if (b != 0) {
            L.v2 = func_0205e7ac(*(uint32_t *)(p + 0x84));
            func_02058318(L.v2, func_0205da88(func_0205e7a8(*(uint32_t *)(p + 0x84))), 0x14, 0, 0, -1);
        }
        func_ov003_02151fa8(p, a, b);
        func_ov003_021515b8(p);
        if (*(uint32_t *)(p + 0xa8) == 1) {
            *(uint8_t *)(*(uint32_t *)(p + 0x98) + 0x3c) = 1;
        }
    }
    data_0213df20 = old;
    return p;
}
