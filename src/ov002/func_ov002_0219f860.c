#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *out, uint32_t val);
extern void *func_0205e240(void *obj, void *arg1, int a2, int a3, int a4);
extern void *func_020059cc(void *object);

void func_ov002_0219f860(uint8_t *p)
{
    uint8_t tmp[12];
    int zero = 0;
    int used = 0;
    void *obj;

    obj = func_0205681c(0x70);
    if (obj != 0) {
        func_02005988(tmp, *(uint32_t *)(p + 0x3c));
        used = 1;
        obj = func_0205e240(obj, tmp, 1, zero, zero);
    }
    *(void **)(*(uint8_t **)(p + 0x38)) = obj;
    if (used) {
        func_020059cc(tmp);
    }
}
