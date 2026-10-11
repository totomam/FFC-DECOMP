#include "ffc/types.h"

extern int func_ov001_021890b0(void **a, void **b, void *c, void *d, int e, int f);
extern int func_ov001_021893c0(void *p, void *q);
extern uint8_t data_ov001_0218f101[];
extern uint8_t data_ov001_02195924[];

typedef struct {
    int flag;
    int pad[2];
    uint32_t ctx;
} Obj;

int func_ov001_021893f4(uint32_t a) {
    Obj *o;
    void *q;
    int r = 0;

    if (func_ov001_021890b0((void **)&o, &q, data_ov001_0218f101, data_ov001_02195924, 0x80, 0) == 0) {
        return 0;
    }
    r = 1;
    o->flag = 1;
    o->ctx = a;
    if (func_ov001_021893c0(o, q) == 0) {
        r = 0;
    }
    return r;
}
