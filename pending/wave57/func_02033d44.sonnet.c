#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_020197b4(void *, uint32_t);
extern void *func_02017c34(void *);
extern int32_t func_0209a76c(int32_t, int32_t);

typedef struct {
    uint8_t pad[0x2c];
    int32_t mul;
    uint32_t key;
} In;

typedef struct {
    uint8_t pad[8];
    uint8_t sub;
    uint8_t ty;
} Hdr;

typedef struct {
    uint8_t pad[0xc];
    uint32_t off;
} Ctx;

typedef struct {
    int16_t x0;
    int16_t v[5];
} Ent;

int32_t func_02033d44(void *x, In *a, int32_t *out)
{
    Hdr *h;
    uint32_t sel;
    uint32_t ty;
    uint32_t sub;
    Ctx *c;
    Ent *e;

    h = (Hdr *)func_020197b4(data_020b8e44, a->key);
    ty = h->ty;
    sub = h->sub;
    if (ty != 3) {
        if (ty != 4) return 0;
        switch (sub) {
        case 0: sel = 1; break;
        case 1: sel = 2; break;
        case 2: sel = 3; break;
        case 3: sel = 4; break;
        case 4: return 0;
        default: return 0;
        }
    } else {
        sel = 0;
    }

    c = (Ctx *)func_02017c34(data_020b8e44);
    e = (Ent *)((uint8_t *)c + c->off + sel * 12);
    out[0] = func_0209a76c(e->v[0] * a->mul, 100);
    out[1] = func_0209a76c(e->v[1] * a->mul, 100);
    out[2] = func_0209a76c(e->v[2] * a->mul, 100);
    out[3] = func_0209a76c(e->v[3] * a->mul, 100);
    out[4] = func_0209a76c(e->v[4] * a->mul, 100);
    return 1;
}
