#include "ffc/types.h"

extern void *data_0213e178;
extern int func_0206cb98(void *a);
extern void func_0206ccf4(void *a);
extern uint32_t func_02056aec(void *a);
extern void *func_0206cbd4(void *a);
extern void func_02056bc0(void *object, void *node);

void func_0206ef38(void *p) {
    uint32_t r4;
    void *n;
    if (func_0206cb98(data_0213e178) != 0) {
        uint32_t v = *(uint32_t *)((uint8_t *)p + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)((uint8_t *)p + 0xc) = v;
        return;
    }
    func_0206ccf4(data_0213e178);
    r4 = func_02056aec(p);
    n = func_0206cbd4(data_0213e178);
    p = (uint8_t *)p + 0x14;
    func_02056bc0(p, n);
    func_02056bc0(p, (void *)r4);
}
