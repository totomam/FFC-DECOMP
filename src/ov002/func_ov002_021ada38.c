#include "ffc/types.h"

extern uint32_t data_020a7d0c[];

typedef struct {
    uint32_t a;
    uint32_t b;
} V2;

typedef void (*VFn)(V2 *, void *);

void func_ov002_021ada38(uint32_t *out, void *obj) {
    V2 v;
    V2 c;
    uint32_t *d = data_020a7d0c;
    ((VFn *)(*(void **)obj))[4](&v, obj);
    c = v;
    out[0] = d[0];
    out[1] = d[1];
    out[2] = d[2];
    out[3] = d[3];
    out[0] += c.a;
    out[1] += c.b;
    out[2] += c.a;
    out[3] += c.b;
}
