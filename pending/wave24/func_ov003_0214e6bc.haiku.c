#include "ffc/types.h"

typedef void (*fn_t)(void *, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t x;
    uint32_t y;
    uint32_t z;
} Args;

void func_ov003_0214e6bc(uint8_t *a)
{
    int32_t *mf = (int32_t *)(a + 0x88);
    uint8_t *obj = *(uint8_t **)(a + 0x84);
    int32_t r4 = mf[1];
    int32_t off;
    fn_t fn;
    Args *ap;

    off = r4 >> 1;
    if (r4 & 1) {
        uint8_t *vt = *(uint8_t **)(obj + off);
        fn = *(fn_t *)(vt + mf[0]);
    } else {
        fn = (fn_t)mf[0];
    }
    ap = (Args *)(a + 0x90);
    fn(obj + off, ap->x, ap->y, ap->z);
    *(uint32_t *)(a + 0xc) = (*(uint32_t *)(a + 0xc) & ~0xffu) | 2u;
}
