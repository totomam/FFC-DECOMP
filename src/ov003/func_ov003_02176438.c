#include "ffc/types.h"

extern uint8_t data_ov003_0217bae8[];
extern uint32_t func_0203c23c(void);
extern uint32_t func_0203c250(void);
extern void func_02060ea4(uint32_t a, uint32_t b);
extern void func_02056db0(void *p);

typedef struct {
    void *vt;
    uint32_t pad[32];
    uint32_t f84;
    uint32_t f88;
} Obj;

void *func_ov003_02176438(void *p0)
{
    Obj *s = (Obj *)p0;
    int i;

    s->vt = data_ov003_0217bae8;
    for (i = 0; i < 2; i++) {
        if (s->f88 == 0 || i == s->f88) {
            uint32_t r = (i == 1) ? func_0203c23c() : func_0203c250();
            uint32_t v = s->f84;
            if (v == 1 || v == 3 || v == 5 || (v - 7) <= 2) {
                func_02060ea4(r, 0x10);
            } else {
                func_02060ea4(r, 0);
            }
        }
    }
    func_02056db0(s);
    return s;
}
