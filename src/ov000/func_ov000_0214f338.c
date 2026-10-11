#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_ov000_0214b95c(int x);
extern void func_02087678(void *p);

uint32_t func_ov000_0214f338(uint8_t *a0) {
    uint8_t *obj = *(uint8_t **)(a0 + 4);
    uint8_t *r6 = *(uint8_t **)(obj + 0xa0);
    uint8_t *r5 = *(uint8_t **)(r6 + 0xc4);
    uint32_t v;

    func_0208763c(r6 + 0xe0);
    v = *(uint32_t *)(a0 + 0x10);
    if (v != 0) {
        *(uint32_t *)(r5 + 0xc) = v;
        func_ov000_0214b95c(1);
        obj[0xaf] = 4;
    } else {
        obj[0xaf] = 0;
        func_ov000_0214b95c(0);
        *(uint32_t *)(r5 + 0xc) = 0;
    }
    func_02087678(r6 + 0xe0);
    return 0;
}
