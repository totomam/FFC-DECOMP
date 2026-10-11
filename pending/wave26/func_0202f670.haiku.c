#include "ffc/types.h"

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
} Obj;

typedef struct G {
    uint8_t flag;
    uint8_t pad[3];
    Obj *p1;
    Obj *p2;
} G;

typedef union {
    uint32_t w;
    uint8_t b[4];
} U;

extern G data_021394f0;
extern void func_02030e68(Obj *p, uint32_t a, uint32_t v);

void func_0202f670(void) {
    volatile U u;
    uint32_t w;
    uint8_t *pb;
    data_021394f0.flag = 0;
    u.b[1] = 0;
    w = 0;
    pb = (uint8_t *)&w;
    *pb = u.b[1];
    func_02030e68(data_021394f0.p1, data_021394f0.p1->f4, w);
    u.b[1] = 0;
    w = 0;
    pb = (uint8_t *)&w;
    *pb = u.b[1];
    func_02030e68(data_021394f0.p2, data_021394f0.p2->f4, w);
}
