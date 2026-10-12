#include "ffc/types.h"

extern uint32_t func_020696e8(const void *object);
extern int func_020320ac(void *obj, uint32_t a, uint32_t b, uint32_t c);

#define V(o) (*(volatile uint32_t *)((uint8_t *)p + (o)))
#define F(o) (*(uint32_t *)((uint8_t *)p + (o)))

void func_02031dec(void *p) {
    if (F(0x100) != 0) {
        uint32_t *o = (uint32_t *)func_020696e8(p);
        uint32_t t = o[1] & (o[2] ^ o[1]);
        if (t & 2) {
            if (func_020320ac(p, F(0x100), 0xbd, 0) != 0) {
                return;
            }
        }
    }
    uint32_t l0 = F(0x110);
    if (l0 == 0) return;
    {
        uint32_t l = F(0x110);
        uint32_t c = F(0x10c);
        V(0x10c) = V(0x10c) + 1;
        if (c < l) return;
    }
    if (F(0x100) != 0) {
        func_020320ac(p, F(0x100), 0xbd, 1);
    } else {
        func_020320ac(p, F(0x114), 0xbb, 1);
    }
}
