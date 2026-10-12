#include "ffc/types.h"

typedef struct VT { void *p[16]; } VT;
typedef struct Obj { VT *vt; } Obj;
extern void func_02056bf4(void *a, void *b);
extern void func_0204e7ac(void *a);
extern uint8_t *data_0213df18;

void func_ov003_02178b9c(uint8_t *self, uint32_t idx)
{
    uint32_t off = idx << 2;
    uint8_t *base = self + 0x8c;
    volatile uint8_t saved;
    uint8_t f;
    uint16_t old;
#define S (*(Obj **)(base + off))

    if (S == 0) {
        return;
    }
    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    f = 0; if (old != 0) f = 1; saved = f;
    func_02056bf4(self + 0x48, S);
    ((void (*)(Obj *))S->vt->p[11])(S);
    if (S != 0) {
        if (S != 0) {
            ((void (*)(Obj *))S->vt->p[1])(S);
        }
        S = 0;
    }
    func_0204e7ac(*(void **)(data_0213df18 + 0x24));
    (void)*(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = saved;
}
