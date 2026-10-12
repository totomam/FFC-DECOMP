#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_ov003_02152bfc(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov003_02160174(void *self, uint32_t a, uint32_t b);
extern uint32_t data_ov003_0217a3ec[];

void func_ov003_021600cc(uint8_t *self, void *p1, uint32_t p2, uint32_t p3)
{
    uint8_t *ctx = *(uint8_t **)(self + 0xd0);
    uint8_t *obj = ctx + 0x1c;
    uint8_t flag = ctx[0x12];
    int r4;

    if (flag != 0) {
        func_0208763c(obj);
    }
    r4 = (*(uint32_t *)(ctx + 0x14) == 0);
    if (flag != 0) {
        func_02087678(obj);
    }
    if (r4 == 0 && p3 == 0) {
        return;
    }

    self[0xce] = 1;
    {
        uint8_t *inner = *(uint8_t **)(self + 0x80);
        uint32_t v = func_ov003_02152bfc(*(void **)(inner + 0x180), p1);
        func_02056bc0(*(void **)(self + 0xd0), (void *)v);
    }
    {
        uint8_t *ec = *(uint8_t **)(self + 0xec);
        if (ec != 0) {
            uint8_t *inner = *(uint8_t **)(self + 0x80);
            uint8_t *q = *(uint8_t **)(inner + 0x180);
            r4 = 1;
            if (*(uint32_t *)(q + 0xdc) == 0) {
                r4 = 0;
            }
            ec[0x2c] = (uint8_t)r4;
        }
    }
    if (p2 != 0) {
        uint32_t r = func_ov003_02160174(self, data_ov003_0217a3ec[0], data_ov003_0217a3ec[1]);
        func_02056bc0(*(void **)(self + 0xd0), (void *)r);
    }
}
