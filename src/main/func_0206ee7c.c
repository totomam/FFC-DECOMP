#include "ffc/types.h"

extern uint32_t func_0206cb98(uint32_t x);
extern void func_0206ce50(uint32_t x, uint32_t y);
extern uint32_t func_02056aec(uint8_t *obj);
extern uint32_t func_0206cbd4(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0213e178;

void func_0206ee7c(uint8_t *a) {
    uint32_t *w = (uint32_t *)a;
    if (func_0206cb98(data_0213e178) != 0) {
        uint32_t v = w[3];
        v = (v & ~0xffu) | 2u;
        w[3] = v;
        return;
    }
    func_0206ce50(data_0213e178, w[0x20]);
    uint32_t r4 = func_02056aec(a);
    uint32_t r = func_0206cbd4(data_0213e178);
    uint8_t *b = a + 0x14;
    func_02056bc0(b, (void *)r);
    func_02056bc0(b, (void *)r4);
}
