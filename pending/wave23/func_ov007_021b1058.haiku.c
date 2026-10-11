#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint8_t pad[0x80];
    uint32_t f84;
} Obj;

extern int func_02076e1c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, void *g, void *h, uint32_t i);
extern void func_ov007_021b110c(void *p);
extern void func_ov007_021b112c(void);
extern uint8_t data_ov007_021c5bd0[];

Obj *func_ov007_021b1058(Obj *p, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t d)
{
    func_02076e1c(p, r1, r2, r3, d, 0, (void *)func_ov007_021b112c, p, 100);
    p->vt = data_ov007_021c5bd0;
    p->f84 = 2;
    func_ov007_021b110c(p);
    return p;
}
