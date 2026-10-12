#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02039120(void *p);
extern int func_0203915c(void *h);
extern void *data_02139d24;
extern uint32_t data_020b0164[2];

void func_0204a31c(uint8_t *p) {
    if (data_02139d24 == 0) {
        void *a = func_0205681c(0x48);
        if (a != 0) {
            a = func_02039120(a);
        }
        data_02139d24 = a;
    }
    if (func_0203915c(data_02139d24) == 0) {
        uint32_t v0 = data_020b0164[0];
        uint32_t v1 = data_020b0164[1];
        uint32_t *q = (uint32_t *)(p + 0x80);
        p = p + 0x84;
        *q = v0;
        *(uint32_t *)p = v1;
    }
}
