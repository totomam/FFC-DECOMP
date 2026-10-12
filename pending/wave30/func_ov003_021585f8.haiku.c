#include "ffc/types.h"

extern uint32_t func_ov003_0215b54c(void);
extern uint32_t func_ov003_0214649c(uint32_t v);
extern void func_ov003_02153e10(uint32_t *out, uint32_t v);
extern void func_ov003_02157b6c(void *p, int a, int b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov003_0215b4cc(void *p);

typedef struct {
    uint32_t a[4];
    uint32_t b;
} Frame;

void func_ov003_021585f8(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    Frame f;
    uint32_t *lp;

    if (p[0xaf] == 0) {
        if (func_ov003_0215b54c() == 0) {
            uint32_t v = func_ov003_0214649c(*(uint32_t *)(p + 0x108));
            lp = &f.b;
            func_ov003_02153e10(lp, v);
            func_ov003_02157b6c(p, 1, 1, *lp, 0, 0, 0);
        }
    }
    *(uint32_t *)(p + 0x324) = 0;
    *(uint32_t *)(p + 0x328) = 0;
    *(uint16_t *)(p + 0x320) = 0;
    func_ov003_0215b4cc(p);
}
