#include "ffc/types.h"

extern void func_02075af4(void *a, uint32_t b, uint32_t c);
extern void *func_02056aec(void *p);
extern void *func_02076314(void *x);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;

void func_ov007_021b12f4(uint8_t *p) {
    func_02075af4(*(void **)(p + 0xb8), 0, 0);
    void *r4 = func_02056aec(p);
    void *r = func_02076314(*(void **)data_020b8e44);
    uint8_t *q = p + 0x14;
    func_02056bc0(q, r);
    func_02056bc0(q, r4);
}
