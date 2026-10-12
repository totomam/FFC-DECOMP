#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t x);
extern void *func_020424e0(void *p);
extern void *func_ov003_021464f4(void *p, uint16_t id);
extern void func_ov003_0215b4e0(void *p, uint16_t v);
extern void func_ov003_0215b520(void *p, uint16_t v);
extern void *func_ov003_02155b40(void *p);
extern void func_ov003_0215b4f4(void *p);
extern void func_ov003_0215b4cc(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *f14;
    uint16_t f18;
    uint16_t f1a;
} FFCObj;

void func_ov003_02166934(FFCObj *a)
{
    void *r;

    a->f18 = func_ov003_021481c0(a->f18);
    if (a->f18 == 0) {
        return;
    }
    r = func_ov003_021464f4(func_020424e0(a->f14), a->f18);
    if (r == 0) {
        return;
    }
    if (a->f1a != 0) {
        func_ov003_0215b4e0(r, a->f1a);
        if (a->f1a == 100) {
            a->f1a = 0;
        }
        func_ov003_0215b520(r, a->f1a);
        *((uint8_t *)func_ov003_02155b40(r) + 5) = 1;
    } else {
        func_ov003_0215b4f4(r);
        func_ov003_0215b4cc(r);
        *((uint8_t *)func_ov003_02155b40(r) + 5) = 0;
    }
}
