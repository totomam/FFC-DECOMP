#include "ffc/types.h"

extern void *func_020424e0(void *);
extern void func_ov003_0214b860(void *a, void *b, uint8_t c, uint8_t d, uint8_t e, uint8_t f);

void func_ov003_02167228(uint8_t *p) {
    void *r = func_020424e0(*(void **)(p + 0x14));
    func_ov003_0214b860(r, *(void **)(p + 0x18), p[0x1c], p[0x1d], p[0x1e], p[0x1f]);
}
