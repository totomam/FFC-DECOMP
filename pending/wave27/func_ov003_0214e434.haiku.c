#include "ffc/types.h"

typedef void (*PFn)(uint8_t *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                    uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t fn;
    uint32_t adj;
} PTM;

typedef struct {
    uint8_t pad[0x38];
    uint8_t *base;
    PTM ptm;
    uint32_t a44, a48, a4c, a50, a54, a58, a5c, a60, a64;
} Obj;

void func_ov003_0214e434(Obj *p) {
    PTM *q = &p->ptm;
    uint32_t adj = q->adj;
    uint32_t fn;

    if (adj & 1) {
        uint32_t vt = *(uint32_t *)(p->base + (adj >> 1));
        fn = *(uint32_t *)(vt + q->fn);
    } else {
        fn = q->fn;
    }
    ((PFn)fn)(p->base + (adj >> 1),
              p->a44, p->a48, p->a4c,
              p->a50, p->a54, p->a58, p->a5c, p->a60, p->a64);
}
