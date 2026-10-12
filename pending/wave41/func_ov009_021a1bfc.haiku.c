#include "ffc/types.h"

typedef struct { uint8_t pad[0x14]; void *f14; } Glob;

extern Glob *data_0213df20;
extern void func_020597d8(void *a, void *b);
extern void func_0205847c(void *a);
extern void func_0205d620(void *a);
extern void func_02056844(void *a);
extern uint32_t data_ov009_021b066c[];
extern uint32_t data_ov009_021b0674[];
extern uint32_t data_ov009_021b067c[];

void func_ov009_021a1bfc(uint8_t *a)
{
    void **p;
    void *x;

    func_020597d8(data_0213df20->f14, *(void **)(a + 0x1b0));
    p = *(void ***)(a + 0x1b4);
    func_0205847c(p[4]);
    x = *(void **)(a + 0x1ac);
    if (x != 0) {
        func_0205d620(x);
        func_02056844(x);
        *(void **)(a + 0x1ac) = 0;
    }
    if (*(uint8_t *)(a + 0x1d4) != 0 && *(void **)(a + 0x1a8) == 0) {
        *(uint32_t *)(a + 0x80) = data_ov009_021b066c[0];
        *(uint32_t *)(a + 0x84) = data_ov009_021b066c[1];
        return;
    }
    if (*(uint8_t *)(a + 0x224) == 0) {
        *(uint32_t *)(a + 0x80) = data_ov009_021b0674[0];
        *(uint32_t *)(a + 0x84) = data_ov009_021b0674[1];
        return;
    }
    *(uint32_t *)(a + 0x80) = data_ov009_021b067c[0];
    *(uint32_t *)(a + 0x84) = data_ov009_021b067c[1];
}
