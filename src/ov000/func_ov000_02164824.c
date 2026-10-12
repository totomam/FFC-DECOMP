#include "ffc/types.h"

typedef struct Ent {
    uint32_t f00;
    int32_t f04;
    int32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    int32_t f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t f1e;
    uint8_t f1f;
    uint16_t f20;
    uint16_t f22;
    uint8_t pad[0x14];
} Ent;

extern Ent *data_ov000_0217096c;
extern uint8_t func_ov000_0216443c(void);
extern uint32_t func_ov000_02164070(void *p);
extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_ov000_02164824(uint32_t idx, void *p, uint32_t n)
{
    Ent *e;
    int32_t buf[2];
    int32_t v;
    uint32_t r5;
    uint8_t st;

    e = data_ov000_0217096c + idx;
    e->f1e = func_ov000_0216443c();
    r5 = func_ov000_02164070(p);
    switch (r5) {
    case 0:
        break;
    case 1:
        if (n != 8) {
            return;
        }
        func_02084ca4(p, buf, 8);
        v = buf[0];
        buf[0] = v;
        e->f18 = v;
        e->f10 = 0;
        if (e->f04 != 0 && e->f08 >= e->f18) {
            st = 2;
        } else {
            st = 4;
        }
        goto store;
    case 2:
    case 3:
    case 4:
        st = 3;
    store:
        e->f1d = st;
        break;
    default:
        break;
    }
    e->f22 = (uint16_t)r5;
}
