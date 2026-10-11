#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t x);
extern int func_020424e0(void *p);
extern void *func_ov003_021464f4(void *a, uint16_t b);
extern void func_ov003_0215b088(void);
extern void func_ov003_0215b0a0(void *p);

typedef struct {
    uint8_t pad[0x14];
    void *ptr14;
    uint16_t val18;
} Obj;

void func_ov003_021668e0(Obj *p)
{
    void *r;
    p->val18 = func_ov003_021481c0(p->val18);
    if (p->ptr14 != 0 && func_020424e0(p->ptr14) != 0) {
        r = func_ov003_021464f4(func_020424e0(p->ptr14), p->val18);
        if (r != 0) {
            func_ov003_0215b088();
            func_ov003_0215b0a0(r);
        }
    }
}
