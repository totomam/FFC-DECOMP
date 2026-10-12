#include "ffc/types.h"

extern uint32_t func_0201e9a8(void *object);
extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_02047920(void *obj, uint32_t v, uint16_t h, uint32_t z);
extern void *func_020474d0(void *obj, uint32_t v, uint32_t one, uint32_t z);
extern void *data_020b93b8;
extern uint8_t data_ov003_0217b4cc[];

void *func_ov003_021717dc(uint8_t *a, uint32_t mode, uint32_t *out) {
    void *r;
    uint8_t *p;
    uint8_t *q;
    uint32_t off;

    switch (mode) {
    case 0:
        if (func_0201e9a8(data_020b93b8) == 0) {
            r = func_0205681c(0x80);
            if (r != 0) {
                func_02056c9c(r, 0);
                *(void **)r = (void *)data_ov003_0217b4cc;
            }
            break;
        }
        r = func_0205681c(0x88);
        if (r != 0) {
            p = *(uint8_t **)(a + 8);
            off = *(uint32_t *)(p + 8);
            if (off == 0) q = 0; else q = p + off;
            r = func_02047920(r, *(uint32_t *)(a + 4), *(uint16_t *)(q + *(uint32_t *)(q + 4) + 0xa), 0);
        }
        *out = 1;
        break;
    case 1:
        r = func_0205681c(0x88);
        if (r != 0) {
            p = *(uint8_t **)(a + 8);
            off = *(uint32_t *)(p + 8);
            if (off == 0) q = 0; else q = p + off;
            r = func_02047920(r, *(uint32_t *)(a + 4), *(uint16_t *)(q + *(uint32_t *)(q + 4) + 0xc), 0);
        }
        break;
    case 2:
        r = func_0205681c(0x98);
        if (r != 0) {
            r = func_020474d0(r, *(uint32_t *)(a + 4), 1, 0);
        }
        *out = 1;
        break;
    default:
        return 0;
    }
    return r;
}
