#include "ffc/types.h"

extern uint16_t func_ov003_021481c0(uint16_t);
extern void *func_020424e0(void *);
extern int func_ov003_021464f4(void *, uint16_t);
extern void func_ov003_021565ac(int, uint16_t);

typedef struct {
    uint8_t pad[0x14];
    void *f14;
    uint16_t f18;
    uint16_t f1a;
} Obj;

void func_ov003_021666dc(Obj *p)
{
    uint16_t v;
    int r;

    p->f18 = func_ov003_021481c0(p->f18);
    v = p->f18;
    if (v == 0) {
        return;
    }
    r = func_ov003_021464f4(func_020424e0(p->f14), v);
    if (r == 0) {
        return;
    }
    func_ov003_021565ac(r, p->f1a);
}
