#include "ffc/types.h"

extern char data_ov003_0217a048[];
extern void *func_ov003_02155b40(void *);
extern void func_ov003_02157b6c(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_ov003_0215b1b0(void *, uint32_t, uint32_t);
extern void func_02056844(void *);

void *func_ov003_0215b6ec(void *a) {
    uint8_t *p = (uint8_t *)a;
    uint32_t z, u;
    uint16_t s;
    void *x;

    *(void **)p = data_ov003_0217a048;
    s = *(uint16_t *)(p + 0x52);
    if (s == 0 || s == 3) {
        x = func_ov003_02155b40(*(void **)(p + 0x4c));
        if (((uint16_t *)x)[0x12 / 2] == *(uint16_t *)(p + 0x56)) {
            z = 0;
            func_ov003_02157b6c(*(void **)(p + 0x4c), 1, 1, 1u << 12, z, z, z, u);
        }
        func_ov003_0215b1b0(*(void **)(p + 0x4c), *(uint16_t *)(p + 0x54), 0);
    }
    func_02056844(p);
    return p;
}
