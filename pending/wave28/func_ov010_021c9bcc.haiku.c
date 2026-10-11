#include "ffc/types.h"

extern uint32_t func_020696e8(const void *object);
extern void func_ov010_021ca3e4(void *object, int arg);

void func_ov010_021c9bcc(void *a)
{
    uint8_t *s = (uint8_t *)a;
    uint32_t *p;
    uint32_t v;

    s[0x281] = 1;
    if (s[0x27a] == 0) {
        p = (uint32_t *)func_020696e8(a);
        v = p[1] & (p[2] ^ p[1]);
        if (v & 0x800) {
            func_ov010_021ca3e4(a, 2);
            return;
        }
        p = (uint32_t *)func_020696e8(a);
        v = p[1] & (p[2] ^ p[1]);
        if (v & 0x400) {
            func_ov010_021ca3e4(a, 0);
        }
    }
}
