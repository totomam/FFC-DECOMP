#include "ffc/types.h"

extern void *func_ov003_02155b40(void *);
extern void func_ov003_021585f8(void *);
extern void func_ov003_02158654(void *);

void func_ov003_021463f8(uint32_t *s, uint32_t v, uint8_t w)
{
    uint32_t i;
    uint8_t *p = (uint8_t *)s;

    *(uint8_t *)&s[0x69] = w;
    if (*(uint8_t *)&s[0x66] == v) {
        return;
    }
    *(uint8_t *)&s[0x66] = v;
    s[0x67] = 0;
    s[0x68] = 0;
    for (i = 0; i < 0x32; i++) {
        void *q = (void *)s[0x28 + i];
        if (*(uint16_t *)func_ov003_02155b40(q) != 0) {
            if (*(uint8_t *)&s[0x66]) {
                func_ov003_021585f8((void *)s[0x28 + i]);
            } else {
                func_ov003_02158654((void *)s[0x28 + i]);
            }
        }
    }
    s[0x103] = 0;
    p[0x410] = 0;
}
