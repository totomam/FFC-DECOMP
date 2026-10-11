#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);
extern int func_ov000_02155234(void *p);
extern void func_ov000_02154e38(void *dst, void *src);
extern void func_ov000_02154ee8(void *dst, int v);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S12;

void func_ov000_02155440(void *p, void *dst)
{
    func_02084b2c(dst, 0, 12);
    if (func_ov000_02155234(p) != 0) {
        func_ov000_02154e38(dst, *(void **)((uint8_t *)p + 0x1c));
        func_ov000_02154ee8(dst, 3);
        return;
    }
    *(S12 *)dst = *(S12 *)((uint8_t *)p + 4);
}
