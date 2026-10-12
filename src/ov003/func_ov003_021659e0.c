#include "ffc/types.h"

typedef struct {
    uint8_t x0;
    uint8_t x1;
    uint8_t flag;
    uint8_t x3;
    uint16_t val;
    uint16_t y;
    uint32_t z[8];
} Rec;

typedef struct {
    uint8_t pad[0x14];
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} Obj;

extern void *data_020b93b8;

extern uint32_t func_ov003_021481c0(uint32_t v);
extern void func_0201d14c(void *h, uint32_t id, void *out);
extern void func_0201d0ac(void *h, uint32_t id, void *p);
extern uint32_t func_020424e0(uint32_t v);
extern void *func_ov003_021464f4(uint32_t a, uint32_t b);
extern void func_ov003_02158528(void *p, Rec r);

void func_ov003_021659e0(Obj *o)
{
    Rec buf;
    void *r;

    o->f18 = func_ov003_021481c0(o->f18);
    o->f1c = func_ov003_021481c0(o->f1c);
    if (o->f18 == 0) return;
    if (o->f1c == 0) return;
    func_0201d14c(data_020b93b8, o->f18, &buf);
    buf.flag = 1;
    buf.val = (uint16_t)o->f1c;
    func_0201d0ac(data_020b93b8, o->f18, &buf);
    r = func_ov003_021464f4(func_020424e0(o->f14), o->f18);
    if (r != 0) {
        func_ov003_02158528(r, buf);
    }
}
