#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern uint32_t func_ov011_021c1234(void *p);
extern void *func_ov011_021c02a8(void *p, S8 v);
extern uint32_t func_0203b720(void);
extern uint32_t func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern S8 data_ov011_021cb11c;
extern S8 data_ov011_021cb124;

void func_ov011_021c0a44(void *p)
{
    uint8_t *s = (uint8_t *)p;
    void *obj;
    void *r;
    uint32_t b4;
    uint32_t b6;

    if (func_ov011_021c1234(p) == 0) {
        return;
    }
    obj = *(void **)(s + 0x2b4);
    if (obj != 0) {
        ((void (*)(void *))(*(void ***)obj)[11])(obj);
        r = func_ov011_021c02a8(p, data_ov011_021cb11c);
        b4 = func_0203b720();
        b6 = func_0203b688();
        func_02056bc0((void *)b6, (void *)b4);
        func_02056bc0((void *)b6, r);
        func_02056bc0(s + 0x14, (void *)b6);
    }
    obj = *(void **)(s + 0x17c);
    ((void (*)(void *))(*(void ***)obj)[11])(obj);
    r = func_ov011_021c02a8(p, data_ov011_021cb124);
    func_02056bc0(s + 0x14, r);
}
