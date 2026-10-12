#include "ffc/types.h"

typedef struct Obj {
    uint32_t a;
    uint32_t pad1[4];
    uint32_t b;
    uint32_t pad2[1];
    uint8_t c;
} Obj;

extern Obj *data_ov006_021bc7f8;
extern uint16_t data_ov006_021b8a50[][2];
extern void func_ov006_021b3dc8(uint32_t a, uint32_t b, int32_t *c, int32_t *d);
extern void func_ov006_021b1600(int32_t v);
extern uint32_t func_ov006_021b570c(uint32_t a, void *fn, uint32_t b, uint32_t c);
extern void func_ov006_021b5774(uint32_t a, uint32_t b);
extern void func_ov006_021b15c0(void);
extern void func_ov006_021b14f4(void);

void func_ov006_021b1480(uint32_t p)
{
    Obj **pp = &data_ov006_021bc7f8;
    int32_t y;
    int32_t x;
    uint32_t r;
    uint16_t lim;

    func_ov006_021b3dc8((*pp)->a, 0, &y, &x);
    x -= 12;
    lim = data_ov006_021b8a50[(*pp)->c][0];
    if (x > lim) {
        func_ov006_021b1600(x);
        return;
    }
    func_ov006_021b1600(lim);
    if ((*pp)->c == 5) {
        r = func_ov006_021b570c(0, (void *)func_ov006_021b15c0, 0, 0x78);
    } else {
        r = func_ov006_021b570c(0, (void *)func_ov006_021b14f4, 0, 0x78);
    }
    (*pp)->b = r;
    func_ov006_021b5774(1, p);
}
