#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

int func_0200c6c4(uint8_t *a) {
    int r5 = 1;
    uint8_t *obj = *(uint8_t **)(a + 0x94);
    if ((int8_t)*(uint32_t *)(obj + 0xc) != 1) {
        r5 = 0;
    }
    if (r5 != 0) {
        uint8_t *q = *(uint8_t **)(a + 0x98);
        uint8_t flag = *(uint8_t *)(q + 0x12);
        uint8_t *s = q + 0x1c;
        if (flag != 0) {
            func_0208763c(s);
        }
        r5 = (*(uint32_t *)(q + 0x14) == 0);
        if (flag != 0) {
            func_02087678(s);
        }
    }
    return r5;
}
