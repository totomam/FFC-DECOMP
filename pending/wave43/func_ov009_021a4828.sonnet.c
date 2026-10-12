#include "ffc/types.h"

extern void func_02056bf4(void *object);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0203bb94(void *object, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_020692a4(void *object);
extern uint32_t data_ov009_021b0bd4[];

void func_ov009_021a4828(uint8_t *p) {
    uint32_t buf[17];
    uint32_t off;
    void **o = *(void ***)(p + 0xc0);
    if (o != 0) {
        func_02056bf4(p + 0x48);
        o = *(void ***)(p + 0xc0);
        if (o != 0) {
            if (o != 0) {
                ((void (*)(void *))(*(void ***)o)[1])(o);
            }
            *(void **)(p + 0xc0) = 0;
        }
    }
    off = 0x27c;
    func_02086ad4(buf, (uint32_t)data_ov009_021b0bd4, p[off]);
    *(void **)(p + 0xc0) = func_0203bb94(buf, 1, 0, 0);
    ((void (*)(void *))((void **)**(void ***)(p + 0xc0))[10])(*(void **)(p + 0xc0));
    ((void (*)(void *, uint32_t))((void **)**(void ***)(p + 0xc0))[8])(*(void **)(p + 0xc0), 3);
    func_02056bc0(p + 0x48, *(void **)(p + 0xc0));
    ((void (*)(void *, uint32_t, uint32_t))((void **)**(void ***)(p + 0xc0))[14])(*(void **)(p + 0xc0), 0, (uint32_t)p[off - 1] * (uint32_t)-192);
    if (p[off] != 1) {
        func_020692a4(*(void **)(p + 0x158));
        func_020692a4(*(void **)(p + 0x15c));
    }
}
