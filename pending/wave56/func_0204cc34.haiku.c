#include "ffc/types.h"

extern void func_0204de50(void *a);
extern uint8_t *func_0204de78(void);
extern uint32_t func_0204aca8(void *a);
extern uint32_t func_0204acb8(void *a, void *b);
extern uint32_t func_0204ac58(void *a, void *b);
extern void func_0204acc0(void *a, uint32_t b);
extern uint32_t func_0204acb0(void *a, uint32_t b);
extern void func_0204ac98(void *a, void *b, uint32_t c);

uint32_t func_0204cc34(uint8_t *s)
{
    uint8_t *r4;
    uint8_t *r6;
    uint32_t r;

    func_0204de50(s);
    r4 = *(uint8_t **)(*(uint8_t **)func_0204de78() + 0xc);
    r6 = *(uint8_t **)(r4 + 0x28);
    if (*(uint32_t *)(r4 + 0xc) != 0) {
        r6 = r4 + 0xe4;
    }
    if (func_0204aca8(r6) == 0) {
        goto L32;
    }
    if (func_0204acb8(r6, s + 4) == 0) {
        goto L5e;
    }
L32:
    r = func_0204ac58(r4, r6);
    *(uint32_t *)(s + 0x314) = r;
    if (r == 0) {
        if (*(uint32_t *)(r4 + 0xc) != 0) {
            *(uint32_t *)(s + 0x330) = 0xc;
            return 0;
        }
        *(uint32_t *)(s + 0x330) = 4;
        return 0;
    }
    goto L68;
L5e:
    *(uint32_t *)(s + 0x314) = *(uint32_t *)(s + 0x318);
L68:
    func_0204acc0(s + 4, 0x100);
    func_0204ac98(s + 4, r6, func_0204acb0(r6, 0xff));
    *(uint32_t *)(s + 0x31c) = *(uint32_t *)(r4 + 0x20);
    if (*(uint32_t *)(r4 + 0xc) != 0) {
        *(uint32_t *)(s + 0x31c) = *(uint32_t *)(r4 + 0x1e4);
    }
    if (*(uint32_t *)(s + 0x314) != *(uint32_t *)(s + 0x318) ||
        *(uint32_t *)(s + 0x31c) != *(uint32_t *)(s + 0x320) ||
        *(uint32_t *)(r4 + 8) == 1) {
        *(uint32_t *)(s + 0x338) = 0;
    }
    *(uint32_t *)(s + 0x318) = *(uint32_t *)(s + 0x314);
    *(uint32_t *)(s + 0x320) = *(uint32_t *)(s + 0x31c);
    return 1;
}
