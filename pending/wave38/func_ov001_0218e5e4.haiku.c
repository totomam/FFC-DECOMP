#include "ffc/types.h"

extern uint32_t func_ov001_0218de10(void);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_ov001_0218e3b4(void *obj, uint32_t x);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_020763c4(void *q, uint32_t a, uint32_t b);
extern void *data_020b8e44;
extern uint32_t data_ov001_021949ec[];

void func_ov001_0218e5e4(void *a)
{
    uint32_t *q = *(uint32_t **)data_020b8e44;
    uint32_t r4, r6, r1;

    if (*(uint32_t *)((uint8_t *)q + 0x88) == 0) {
        return;
    }
    func_02056bc0((uint8_t *)a + 0x14, func_ov001_0218de10());
    func_ov001_0218e3b4(a, 0);
    r4 = func_02056aec(a);
    r6 = func_020763c4(*(void **)data_020b8e44, data_ov001_021949ec[0], data_ov001_021949ec[1]);
    r1 = ((uint32_t (*)(void *))(*(void ***)a)[6])(a);
    a = (uint8_t *)a + 0x14;
    func_02056bc0(a, r1);
    func_02056bc0(a, r6);
    func_02056bc0(a, r4);
}
