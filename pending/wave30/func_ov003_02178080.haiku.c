#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern S8 data_ov003_0217bd74;
extern S8 data_ov003_0217bd7c;
extern void *func_0203b688(void *owner);
extern void *func_02056b10(void *owner);
extern void *func_ov003_021780d4(void *self, S8 v);
extern void *func_ov003_02178114(void *self, S8 v, int flag);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_02178080(void *p)
{
    void *r4 = func_0203b688(p);
    void *r6 = func_02056b10(*(void **)((uint8_t *)p + 0xa0));
    void *r7 = func_ov003_021780d4(p, data_ov003_0217bd74);
    void *r1 = func_ov003_02178114(p, data_ov003_0217bd7c, 1);
    func_02056bc0(r4, r1);
    func_02056bc0(r4, r7);
    func_02056bc0(r4, r6);
    return r4;
}
