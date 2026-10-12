#include "ffc/types.h"

extern void func_ov009_0219a308(void *p);
extern void *func_ov011_021c8478(void *owner, uint32_t a, uint32_t b);
extern void *func_02056b10(void *owner);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cbd8c[];

void func_ov011_021c8a90(uint8_t *self)
{
    uint32_t *obj;
    uint32_t *d;
    void *r4;
    uint8_t *s;
    void *n;

    *(uint32_t *)(self + 0x3ac) = 0;
    obj = *(uint32_t **)(self + 0x34c);
    obj[3] = (obj[3] & ~0xffu) | 2;
    func_ov009_0219a308(((void **)(self + 0xfc))[*(uint32_t *)(self + 0x3a8)]);
    d = data_ov011_021cbd8c;
    r4 = func_ov011_021c8478(self, d[0], d[1]);
    n = func_02056b10((uint8_t *)*(void **)(self + 0xbc) + 0x14);
    s = self + 0x14;
    func_02056bc0(s, n);
    func_02056bc0(s, r4);
}
