#include "ffc/types.h"
extern void func_ov000_0214ffd8(void *p, void *b);
typedef struct { uint16_t pad0; uint16_t h; } Obj;
void func_ov000_02151cd0(uint8_t p0, Obj *p1, uint8_t p2, uint8_t *base)
{
    uint8_t *q = base + 0xc1c;
    uint32_t r3; uint8_t *z = base + 0x13a0;
    q[1] = p0;
    r3 = p1->h;
    if ((((uint32_t)base[0x14bc] << 26) >> 31) == 1) {
        if (r3 & 2) {
            r3 = (r3 << 22) >> 24;
        } else {
            r3 = ((int32_t)r3 >> 2) + 0x19;
            r3 = (uint8_t)r3;
        }
    }
    q[2] = r3;
    q[3] = (q[3] & ~0x7f) | (p2 & 0x7f);
    func_ov000_0214ffd8(p1, z);
}
