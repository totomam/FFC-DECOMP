#include "ffc/types.h"

extern void *func_020424e0(void *obj);
extern void func_ov003_02149768(void *obj, int a, int b, int c, int d);
extern uint32_t func_ov003_02149850(void);
extern void func_02056bc0(void *object, void *node);
extern void func_020483ac(void *obj);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_020afd18;

void func_02048738(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *h = func_020424e0(*(void **)(p + 0x88));
    func_ov003_02149768(h, 2, 0, 0x1e, 0);
    func_020424e0(*(void **)(p + 0x88));
    func_02056bc0(p + 0x14, (void *)func_ov003_02149850());
    func_020483ac(self);
    *(uint32_t *)(p + 0x90) = 3;
    {
        *(Pair *)(p + 0x80) = data_020afd18;
    }
}
