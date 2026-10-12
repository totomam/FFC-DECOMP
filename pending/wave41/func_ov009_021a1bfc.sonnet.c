#include "ffc/types.h"

typedef struct { uint8_t pad[0x14]; void *f14; } Glob;
typedef struct { uint32_t a, b; } P8;
typedef struct { uint32_t pad[4]; void *f10; } Q;

extern Glob *data_0213df20;
extern void func_020597d8(void *a, void *b);
extern void func_0205847c(void *a);
extern void func_0205d620(void *a);
extern void func_02056844(void *a);
extern uint32_t data_ov009_021b066c[];
extern uint32_t data_ov009_021b0674[];
extern uint32_t data_ov009_021b067c[];

static inline void g(Q *q){ func_0205847c(q->f10); }
static inline void rel(void *x){ if (x != 0) { func_0205d620(x); func_02056844(x); } }

void func_ov009_021a1bfc(uint8_t *a)
{
    Q *p;
    void *x; void *t;

    func_020597d8(data_0213df20->f14, *(void **)(a + 0x1b0));
    p = *(Q **)(a + 0x1b4);
    g(p);
    x = *(void **)(a + 0x1ac);
    if (x != 0) {
        rel(x);
        *(void **)(a + 0x1ac) = 0;
    }
    if (*(uint8_t *)(a + 0x1d4) != 0 && *(void **)(a + 0x1a8) == 0) {
        *(P8 *)(a + 0x80) = *(P8 *)data_ov009_021b066c;
        return;
    }
    if (*(uint8_t *)(a + 0x224) == 0) {
        *(P8 *)(a + 0x80) = *(P8 *)data_ov009_021b0674;
        return;
    }
    *(P8 *)(a + 0x80) = *(P8 *)data_ov009_021b067c;
}
