#include "ffc/types.h"

extern void *data_0213e178;
extern uint32_t func_0206cb98(void *obj);
extern void func_0206d188(void *obj, uint16_t v, void *p, uint32_t w, uint32_t x);
extern void *func_02056aec(void *obj);
extern void *func_0206cbd4(void *obj);
extern void func_02056bc0(void *object, void *node);

void func_0206ee04(uint8_t *a) {
    if (func_0206cb98(data_0213e178) != 0) {
        uint32_t v = *(uint32_t *)(a + 0xc);
        v &= ~0xffu;
        *(uint32_t *)(a + 0xc) = v | 2;
        return;
    }
    *(uint16_t *)((uint8_t *)data_0213e178 + 0xf8a) = *(uint16_t *)(a + 0xf4);
    func_0206d188(data_0213e178, *(uint16_t *)(a + 0xf4), a + 0x80,
                  *(uint32_t *)(a + 0xf0), *(uint32_t *)(a + 0xf8));
    {
        void *r6 = func_02056aec(a);

        void *r1 = func_0206cbd4(data_0213e178);
        uint8_t *p = a + 0x14;
        func_02056bc0(p, r1);
        func_02056bc0(p, r6);
    }
}
