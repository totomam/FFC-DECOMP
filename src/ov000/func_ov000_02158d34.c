#include "ffc/types.h"

typedef struct {
    uint64_t a;
    uint64_t b;
    uint32_t c;
} Buf;

extern void func_ov000_021585a8(Buf *out);

uint32_t func_ov000_02158d34(void)
{
    Buf buf;

    func_ov000_021585a8(&buf);
    if (buf.b == 0) {
        if (buf.a == 0) {
            return 1;
        }
    }
    return 0;
}
