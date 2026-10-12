#include "ffc/types.h"

extern uint32_t func_0203c23c(void);
extern uint32_t func_0203c250(void);
extern void func_02060ea4(uint32_t a, uint32_t b);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint8_t data_ov003_0217bae8[];

typedef struct {
    void *vt;
    uint8_t pad[0x84 - 4];
    uint32_t f84;
    uint32_t f88;
} Obj;

Obj *func_ov003_02176498(Obj *p)
{
    int i;
    uint32_t r;
    uint32_t v;

    p->vt = data_ov003_0217bae8;
    for (i = 0; i < 2; i++) {
        if (p->f88 == 0 || i == p->f88) {
            if (i == 1) {
                r = func_0203c23c();
            } else {
                r = func_0203c250();
            }
            v = p->f84;
            if (v == 1 || v == 3 || v == 5 || (v - 7) <= 2) {
                v = 0x10;
            } else {
                v = 0;
            }
            func_02060ea4(r, v);
        }
    }
    func_02056db0(p);
    func_02056844(p);
    return p;
}
