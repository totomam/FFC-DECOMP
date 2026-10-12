#include "ffc/types.h"

extern uint32_t func_020424e0(void *x);
extern void func_ov003_0214df04(uint32_t r, uint32_t a, uint32_t b);
extern void func_ov003_0214df60(void);
extern void *func_02056aec(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_ov003_02169448(void *p)
{
    uint8_t *b = (uint8_t *)p;

    if (b[0x84]) {
        uint32_t r = func_020424e0(*(void **)(b + 0x80));
        func_ov003_0214df04(r, *(uint32_t *)(b + 0x88), *(uint32_t *)(b + 0x8c));
    } else {
        func_020424e0(*(void **)(b + 0x80));
        func_ov003_0214df60();
    }
    func_02056bc0(b + 0x14, func_02056aec(p));
}
