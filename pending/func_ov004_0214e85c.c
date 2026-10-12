#include "ffc/types.h"

extern int func_ov004_0214f740(uint8_t *self, uint32_t a);
extern void func_ov004_0214ecac(uint8_t *self, uint32_t a, int32_t *p, int32_t *q);
extern int func_01fff010(uint32_t obj, int32_t x, int32_t y);

int func_ov004_0214e85c(uint8_t *self, uint32_t a, int32_t v, int32_t w)
{
    v = func_ov004_0214f740(self, a) == 0 ? v : (*(int32_t *)(self + 0xfc) - 1) - v;
    func_ov004_0214ecac(self, a, &v, &w);
    if (*(uint8_t *)(self + 0xf5) == 0) {
        if (func_01fff010(*(uint32_t *)(self + 0xa0), v, w) != 0) {
            if (func_01fff010(*(uint32_t *)(self + 0x98), v, w) != 0) {
                return 1;
            }
        }
        return 0;
    } else {
        if (func_01fff010(*(uint32_t *)(self + 0xa0), v, w) != 0) {
            if (func_01fff010(*(uint32_t *)(self + 0x98), v, w) != 0) {
                if (func_01fff010(*(uint32_t *)(self + 0xa4), v, w) != 0) {
                    if (func_01fff010(*(uint32_t *)(self + 0x9c), v, w) != 0) {
                        return 1;
                    }
                }
            }
        }
        return 0;
    }
}
