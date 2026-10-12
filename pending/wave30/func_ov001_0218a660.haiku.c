#include "ffc/types.h"

extern void func_02037598(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_ov001_0218de64(void *p, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_020ac698[];
extern uint32_t data_ov001_02194630[];

typedef struct VT {
    void *f[24];
} VT;

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov001_0218a660(void *p) {
    uint32_t *n;
    uint32_t r;

    func_02037598(p);
    n = (uint32_t *)func_0205681c(0x14);
    if (n != 0) {
        r = ((uint32_t (*)(void *))(*(VT **)p)->f[14])(p);
        n[2] = 0;
        n[3] = 0x100b1;
        n[0] = (uint32_t)data_020ac698;
        n[4] = r;
    }
    ((void (*)(void *, uint32_t *))(*(VT **)p)->f[19])(p, n);
    func_ov001_0218de64(p, 4, 1, 0);
    *(Pair *)((uint8_t *)p + 0xf4) = *(Pair *)data_ov001_02194630;
}
