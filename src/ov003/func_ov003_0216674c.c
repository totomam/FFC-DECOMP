#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint32_t b;
    uint16_t c;
    uint16_t pad;
    uint8_t d;
} Arg;

typedef struct Obj {
    void *vt;
    uint8_t pad[0x7c];
    uint32_t f80;
    uint8_t f84;
    uint8_t f85;
    uint16_t f86;
    uint16_t f88;
    uint16_t f8a;
    uint32_t f8c;
} Obj;

extern void func_02056c9c(void *p, int x);
extern char data_ov003_0217a824[];

Obj *func_ov003_0216674c(Obj *p, uint32_t x, uint16_t y, uint16_t z, Arg s)
{
    func_02056c9c(p, 0);
    p->vt = data_ov003_0217a824;
    p->f80 = x;
    p->f84 = s.a;
    p->f85 = s.d;
    p->f86 = y;
    p->f88 = z;
    p->f8a = s.c;
    p->f8c = s.b;
    return p;
}
