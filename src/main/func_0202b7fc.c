#include "ffc/types.h"
extern void func_02024f48(void *p, void *v);
extern void func_0202cf3c(void *p, void *q);
extern void func_020257f4(void *p);

void func_0202b7fc(uint8_t *p, uint8_t *q) {
    void *v = *(void **)(q + 0x34);
    if (v != 0) {
        func_02024f48(p, v);
        return;
    }
    uint32_t local[3];
    uint8_t *l = (uint8_t *)local;
    *(uint8_t **)(l + 8) = l + 4;
    *(uint32_t *)l = 0;
    *(uint32_t *)(l + 4) = 0;
    *(uint8_t **)(p + 8) = p + 4;
    *(uint32_t *)p = 0;
    *(uint32_t *)(p + 4) = 0;
    func_0202cf3c(p, l);
    func_020257f4(l);
}
