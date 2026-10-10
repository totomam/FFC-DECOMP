#include "ffc/types.h"

extern uint32_t *data_0213e178;
extern void func_0206cd88(void);
extern void *func_02056aec(void *p);
extern void *func_0206cbd4(void *p);
extern void func_02056bc0(void *object, void *node);

void func_0206eeec(uint8_t *a0)
{
    if (data_0213e178[0xc2c] == 1) {
        uint32_t v = *(uint32_t *)(a0 + 0xc);
        *(uint32_t *)(a0 + 0xc) = (v & ~0xffu) | 2;
        return;
    }
    func_0206cd88();
    void *r4 = func_02056aec(a0);
    void *r1 = func_0206cbd4(data_0213e178);
    uint8_t *q = a0 + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r4);
}
