#include "ffc/types.h"

typedef int (*VFn)(void *);
typedef struct { uint32_t a, b; } Pair;

extern int func_020559d4(void *p);
extern int func_0201cf34(uint32_t h, void *p);
extern int func_0201ce70(uint32_t h, void *p);
extern uint32_t data_020b93b8;
extern Pair data_ov001_021945f8;
extern Pair data_ov001_02194600;

void func_ov001_02189fdc(void *p) {
    uint32_t m1, m0;
    uint32_t st[38];
    uint32_t *sel;
    Pair q;

    if (((VFn *)(*(void **)p))[13](p)) {
        q = data_ov001_021945f8;
        *(Pair *)((uint8_t *)p + 0xf4) = q;
        return;
    }

    func_020559d4((uint8_t *)p + 0xb0);
    if (!((uint8_t *)p)[0x104] || !((uint8_t *)p)[0x3dc]) {
        return;
    }
    func_0201cf34(data_020b93b8, st);
    m0 = (*(uint32_t *)((uint8_t *)p + 0x3dc + 0x1c) << 13) >> 27;
    m1 = (*(uint32_t *)((uint8_t *)p + 0x104 + 0x1c) << 13) >> 27;
    sel = (m0 < m1) ? &m0 : &m1;
    st[5] = (st[5] & 0xfff83fff) | ((*sel << 27) >> 13);
    func_0201ce70(data_020b93b8, st);
    q = data_ov001_02194600;
    *(Pair *)((uint8_t *)p + 0xf4) = q;
}
