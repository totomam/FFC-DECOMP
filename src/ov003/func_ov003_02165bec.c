#include "ffc/types.h"

typedef struct {
    uint8_t h0;
    uint8_t h1;
    uint8_t type;
    uint8_t h3;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint8_t count;
    uint8_t pad11;
    uint16_t arr[9];
    uint32_t last;
} Msg;

typedef struct {
    uint8_t pad0[0x14];
    uint32_t p14;
    uint32_t p18;
    uint32_t p1c;
    uint32_t p20;
    uint32_t p24;
    uint32_t *p28;
    uint32_t p2c;
    uint32_t p30;
    uint32_t p34;
} Obj;

extern uint32_t data_020b93b8;
extern uint32_t func_ov003_021481c0(uint32_t);
extern void func_0201d14c(uint32_t, uint32_t, Msg *);
extern void func_0201d0ac(uint32_t, uint32_t, Msg *);
extern uint32_t func_020424e0(uint32_t);
extern uint32_t func_ov003_021464f4(uint32_t, uint32_t);
extern void func_ov003_02158528(uint32_t, Msg);

void func_ov003_02165bec(Obj *a)
{
    Msg m;
    uint32_t i;
    uint32_t r;
    uint32_t t;
    uint32_t x;

    t = func_ov003_021481c0(a->p18);
    a->p18 = t;
    if (t != 0) {
        func_0201d14c(data_020b93b8, t, &m);
        m.type = 4;
        m.f4 = a->p1c;
        m.f8 = a->p20;
        m.fc = a->p24;
        m.count = a->p2c;
        m.last = a->p34;
        for (i = 0; i < a->p2c; i++) {
            m.arr[i] = a->p28[i];
        }
        func_0201d0ac(data_020b93b8, a->p18, &m);
        x = func_020424e0(a->p14);
        r = func_ov003_021464f4(x, a->p18);
        if (r != 0) {
            func_ov003_02158528(r, m);
        }
    }
}
