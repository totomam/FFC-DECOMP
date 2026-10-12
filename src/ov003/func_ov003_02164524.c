#include "ffc/types.h"

extern void *func_020424e0(void *a);
extern uint16_t func_ov003_021481c0(uint16_t a);
extern int func_ov003_021464f4(void *a, uint16_t b);
extern uint8_t *func_ov003_02155b40(void);
extern void *func_02056aec(void *a);
extern void *func_ov003_02149478(void *a, uint16_t b, uint32_t c, uint16_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02164524(uint8_t *p) {
    void *v = func_020424e0(*(void **)(p + 0x80));
    uint16_t x = func_ov003_021481c0(*(uint16_t *)(p + 0x84));
    uint32_t r4;
    *(uint16_t *)(p + 0x84) = x;
    if (p[0x8a] != 0) {
        r4 = *(uint16_t *)(p + 0x86);
    } else {
        if (func_ov003_021464f4(v, *(uint16_t *)(p + 0x84)) == 0) {
            uint32_t c = *(uint32_t *)(p + 0xc);
            c = (c & ~0xffu) | 2u;
            *(uint32_t *)(p + 0xc) = c;
            return;
        }
        uint8_t *q = func_ov003_02155b40();
        r4 = (uint16_t)(*(uint16_t *)(p + 0x86) + *(uint16_t *)(q + 0x10));
    }
    void *r7 = func_02056aec(p);
    void *res = func_ov003_02149478(v, *(uint16_t *)(p + 0x84), r4, *(uint16_t *)(p + 0x88),
                                    *(uint32_t *)(p + 0x90), 2, *(uint32_t *)(p + 0x94),
                                    *(uint32_t *)(p + 0x8c), 0);
    uint8_t *obj = p + 0x14;
    func_02056bc0(obj, res);
    func_02056bc0(obj, r7);
}
