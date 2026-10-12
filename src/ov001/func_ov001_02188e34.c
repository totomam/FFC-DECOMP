#include "ffc/types.h"

extern void func_ov001_021899dc(void *p, uint32_t n);
extern void func_ov000_021585a8(void *p);
extern int32_t func_ov001_02189a08(void *out, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_021889d4(void *dst, const void *src, uint32_t n);

int32_t func_ov001_02188e34(void *r0, void *r1) {
    uint32_t buf[5];
    uint32_t out[4];
    uint32_t n;

    func_ov001_021899dc(buf, 0x14);
    func_ov000_021585a8(buf);
    uint64_t v = *(uint64_t *)buf;
    if (v == 0) {
        return 0;
    }
    n = 13;
    if (func_ov001_02189a08(out, (uint32_t)v, (uint32_t)(v >> 32), n) < 0) {
        return 0;
    }
    func_ov001_021889d4(r1, out, n);
    func_ov001_021889d4(r0, (const void *)0x2fffe0c, 4);
    return 1;
}
