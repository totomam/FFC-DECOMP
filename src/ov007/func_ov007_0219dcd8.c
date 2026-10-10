#include "ffc/types.h"

extern void *func_02056aec(void *self);
extern void *func_0203c0a8(uint32_t size);
extern void *func_0203c094(uint32_t size);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);

void func_ov007_0219dcd8(uint8_t *p)
{
    uint32_t *q;
    void *r7;
    void *s;
    void *r4;
    void *r6;
    uint8_t *o;

    q = *(uint32_t **)(p + 0x88);
    *q = 5;
    r7 = func_02056aec(p);
    s = func_0203c0a8(0x3c);
    r4 = func_0203c094(0x3c);
    r6 = func_0203b6fc();
    func_02056bc0(r6, r4);
    func_02056bc0(r6, s);
    o = p + 0x14;
    func_02056bc0(o, r6);
    func_02056bc0(o, r7);
}
