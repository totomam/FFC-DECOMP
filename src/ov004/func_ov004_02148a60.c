#include "ffc/types.h"

extern void *func_0203b708(uint32_t x);
extern void *func_0205f8e0(void *x);
extern void *func_0205f904(void *x);
extern void func_02056bc0(void *object, void *node);

void func_ov004_02148a60(uint8_t *p)
{
    void *a = func_0203b708(15);
    void *b = func_0205f8e0(*(void **)(p + 0x9c));
    void *c = func_0203b708(15);
    void *d = func_0205f904(*(void **)(p + 0x9c));
    uint8_t *q = p + 0x14;
    func_02056bc0(q, d);
    func_02056bc0(q, c);
    func_02056bc0(q, b);
    func_02056bc0(q, a);
}
