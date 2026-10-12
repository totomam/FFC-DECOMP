#include "ffc/types.h"

extern int func_ov005_02198678(void *self, uint32_t idx);
extern void func_ov005_02196bec(void *obj, int flag);

void func_ov005_021989e8(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint16_t i;
    uint32_t buf[6];
    uint32_t *cntp;
    int flag;
    void *inner;

    cntp = (uint32_t *)(p + 0x118);
    if (*cntp > 0) {
        i = 0;
        do {
            ((int (*)(void *, uint32_t, uint32_t *))(*(void ***)self)[12])(self, i + (*(uint32_t *)(p + 0xfc) << 3), buf);
            flag = 0;
            if (func_ov005_02198678(self, i + (*(uint32_t *)(p + 0xfc) << 3)) != 0) {
                flag = 1;
            } else if (((int (*)(void *, uint32_t *))(*(void ***)self)[14])(self, buf) != 0) {
                if (((int (*)(void *))(*(void ***)self)[13])(self) != 0) {
                    flag = 1;
                }
            }
            func_ov005_02196bec(((void **)*(void ***)(p + 0x114))[i], flag);
            i++;
        } while (i < *cntp);
    }

    for (i = 0; i < 0x40; i++) {
        if (func_ov005_02198678(self, i) != 0) {
            inner = *(void **)((uint8_t *)*(void **)(p + 0x12c) + 0x98);
            ((int (*)(void *, uint32_t, uint32_t))(*(void ***)inner)[14])(inner, 4, 0);
            return;
        }
    }
    inner = *(void **)((uint8_t *)*(void **)(p + 0x12c) + 0x98);
    ((int (*)(void *, uint32_t, uint32_t))(*(void ***)inner)[14])(inner, 1, 0);
}
