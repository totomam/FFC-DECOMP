#include "ffc/types.h"

typedef struct {
    uint64_t q;
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
    if (v == b.q) return 1;
    return 0;
}
