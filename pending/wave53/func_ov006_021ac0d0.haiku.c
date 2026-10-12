#include "ffc/types.h"

extern int func_0208130c(uint16_t a, int b);
extern int func_02081334(uint16_t a, int b);

typedef struct Sub {
    uint8_t pad0[0x18];
    uint32_t *slot[5];
    uint32_t *f2c;
    uint32_t *f30;
    uint32_t *f34;
    uint8_t pad38[0xc];
    uint8_t f44;
} Sub;

typedef struct Glob {
    uint32_t pad0;
    uint16_t f4;
    uint16_t pad6;
    Sub *f8;
} Glob;

extern Glob data_ov006_021bc78c;

#define FIXW(x, low) (((x) & 0xfe00ff00u) | ((((x) & 0x1ff0000u) >> 16) << 23 >> 7) | ((uint32_t)(low) & 0xffu))

void func_ov006_021ac0d0(void)
{
    int r4;
    int v;
    int i;
    uint32_t *w;
    uint32_t sel;
    Sub *s;

    r4 = func_0208130c(data_ov006_021bc78c.f4, 0x1d);
    v = 0x34 - func_02081334(data_ov006_021bc78c.f4, 0x1d);
    s = data_ov006_021bc78c.f8;

    if (s->f34 != 0) {
        if (r4 == 0) {
            sel = 0x26u;
        } else {
            sel = 0xf2u;
        }
        w = s->f34;
        *w = (*w & 0xfe00ff00u) | ((sel << 23) >> 7) | ((uint32_t)v & 0xffu);
    }

    for (i = 0; i < 5; i++) {
        w = data_ov006_021bc78c.f8->slot[i];
        *w = FIXW(*w, v + 0x1d * i);
    }

    if (r4 <= 2) {
        w = data_ov006_021bc78c.f8->f2c;
        *w = FIXW(*w, v + 0x1d * (2 - r4));
    } else {
        w = data_ov006_021bc78c.f8->f2c;
        *w = (*w & 0xfe00ff00u) | 0x01000000u;
    }

    if (r4 >= 2 && r4 <= 6) {
        w = data_ov006_021bc78c.f8->f30;
        *w = FIXW(*w, v + 0x1d * (6 - r4));
    } else {
        w = data_ov006_021bc78c.f8->f30;
        *w = (*w & 0xfe00ff00u) | 0x01000000u;
    }

    data_ov006_021bc78c.f8->f44 = 1;
}
