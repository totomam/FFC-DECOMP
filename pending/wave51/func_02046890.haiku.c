#include "ffc/types.h"

extern void *func_020424e0(uint32_t p);
extern void func_ov003_02149768(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint8_t *func_ov003_02146494(void);
extern uint32_t func_02056aec(uint8_t *p);
extern uint32_t func_ov003_02149850(void);
extern void func_02056bc0(void *object, uint32_t node);

void func_02046890(uint8_t *a) {
    uint8_t *p;
    uint32_t r5;
    uint32_t t;
    uint8_t *b;
    if (*(uint32_t *)(a + 0x8c) == 0) {
        r5 = 2;
        if (*(uint32_t *)(a + 0x98) != 0) {
            r5 = 0;
        }
        func_ov003_02149768(func_020424e0(*(uint32_t *)(a + 0x88)), r5, 0, 0x1e, 0);
    }
    func_020424e0(*(uint32_t *)(a + 0x88));
    p = func_ov003_02146494();
    *(uint32_t *)(p + 0xe0) = 2;
    r5 = func_02056aec(a);
    func_020424e0(*(uint32_t *)(a + 0x88));
    t = func_ov003_02149850();
    b = a + 0x14;
    func_02056bc0(b, t);
    func_02056bc0(b, r5);
}
