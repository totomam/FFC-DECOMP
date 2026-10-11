#include "ffc/types.h"

typedef struct Inner {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t pad[0x24 - 12];
    uint32_t f24;
} Inner;

typedef struct Outer {
    uint32_t *f0;
    uint8_t pad[0x18 - 4];
    uint32_t f18;
    uint32_t pad2;
    Inner *f20;
} Outer;

extern int8_t data_ov007_021c9d3c;
extern uint8_t data_ov007_021c8de4;
extern void func_02086b04(int8_t *a, uint32_t b, uint8_t *c, uint32_t *d);
extern uint32_t *func_ov000_02166024(int8_t *a, uint32_t b, uint32_t c, void *d, Outer *e);
extern void func_ov007_021c0574(void);

void func_ov007_021c06cc(Outer *p)
{
    if (data_ov007_021c9d3c == 0) {
        func_02086b04(&data_ov007_021c9d3c, 0x80, &data_ov007_021c8de4, p->f0 + 1);
    }
    {
        uint32_t *r = func_ov000_02166024(&data_ov007_021c9d3c, p->f20->f8, p->f18, func_ov007_021c0574, p);
        if (r != 0) {
            p->f20->f24 = ((Inner *)r)->f24;
        } else {
            p->f20->f24 = 0;
        }
    }
}
