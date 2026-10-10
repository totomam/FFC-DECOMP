#include "ffc/types.h"

extern void *func_020655b8(void *);
extern void *func_020655dc(void *, int, int);
extern void *func_02021610(int, int);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);

void *func_ov013_021c0d64(uint8_t *self)
{
    uint8_t *obj = *(uint8_t **)(self + 0xc0);
    void *a = func_020655b8(*(void **)(obj + 0x94));
    void *b = func_020655dc(*(void **)(obj + 0x94), 3, 0);
    void *c = func_02021610(0xbc, 0);
    void *d = func_0203b688();
    func_02056bc0(d, c);
    func_02056bc0(d, b);
    func_02056bc0(d, a);
    return d;
}
