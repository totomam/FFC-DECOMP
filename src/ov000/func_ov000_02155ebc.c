#include "ffc/types.h"

extern void func_ov000_02155e98(void);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern uint64_t func_020882cc(void);
extern int func_ov000_02155558(void *p, const void *q);
extern uint8_t data_ov000_0216e2d0[];
extern uint8_t data_ov000_0216e304[];
extern uint8_t data_ov000_0216e2b4[];
extern uint8_t data_ov000_0216e318[];

uint32_t func_ov000_02155ebc(void *a0, void *a1, uint64_t a2, uint32_t a4, uint32_t a5)
{
    uint32_t *d;
    uint32_t *e;
    uint64_t v;

    func_ov000_02155e98();
    func_02084ca4(a0, data_ov000_0216e2d0, 0x34);
    d = (uint32_t *)data_ov000_0216e2d0;
    func_02084ca4(a1, data_ov000_0216e304, 0xc);
    d[0x40 / 4] = a4;
    d[0x44 / 4] = a5;
    v = func_020882cc();
    e = (uint32_t *)data_ov000_0216e2b4;
    *(uint64_t *)(data_ov000_0216e2b4 + 0x14) = v;
    *(uint64_t *)(data_ov000_0216e2b4 + 0xc) = a2;
    if (func_ov000_02155558(d, data_ov000_0216e318) != 0) {
        return 0;
    }
    return 1;
}
