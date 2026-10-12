#include "ffc/types.h"

extern void func_020848b8(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02084774(void *a);
extern void func_02086650(void *a, void *b, void *c);
extern void func_01ff8f28(void *a, void *b, void *c, uint32_t flags, uint32_t k);

void func_020846b0(void *a, void *b, void *c, uint32_t d, void (*cb)(void *), void *cbarg, int flag)
{
    func_020848b8(a, b, (void *)d, 0);
    if (d == 0) {
        if (cb != 0) {
            cb(cbarg);
        }
        return;
    }
    func_02084774(a);
    if (cb != 0) {
        func_02086650(a, (void *)cb, cbarg);
        if (flag != 0) {
            func_01ff8f28(a, b, c, (0x31u << 26) | (d >> 2), 0);
        } else {
            func_01ff8f28(a, b, c, (0x11u << 26) | (d >> 2), 4);
        }
    } else {
        if (flag != 0) {
            func_01ff8f28(a, b, c, (0x21u << 26) | (d >> 2), 0);
        } else {
            func_01ff8f28(a, b, c, (4u << 24) | (d >> 2), 4);
        }
    }
}
