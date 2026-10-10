#include "ffc/types.h"

extern void func_ov003_021552a4(void *a, uint32_t b, uint32_t c);
extern void func_ov003_02155418(void *a, uint32_t b, void *c, uint32_t d);

void func_ov003_02155520(uint8_t *p0, uint32_t p1, uint32_t p2) {
    func_ov003_021552a4(p0, p1, p2);
    func_ov003_02155418(p0, p1, p0 + 0xc, p2);
}
