#include "ffc/types.h"

typedef struct {
    uint32_t lo;
    uint32_t hi;
    uint32_t pad[3];
} Buf;

extern uint32_t func_ov000_02154e4c(void *p);
extern void func_ov000_02158cf4(Buf *out);
extern uint64_t func_ov000_02154de4(void *p);

uint32_t func_ov000_021552ac(uint8_t *p)
{
    Buf b;
    uint64_t v;

    if (func_ov000_02154e4c(p + 0x10) == 0) {
        return 1;
    }
    func_ov000_02158cf4(&b);
    if (b.pad[2] == 0) {
        return 0;
    }
    p += 0x10;
    v = func_ov000_02154de4(p);
    return (((uint32_t)v ^ b.lo) | ((uint32_t)(v >> 32) ^ b.hi)) == 0;
}
