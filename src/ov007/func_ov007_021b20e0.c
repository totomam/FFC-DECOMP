#include "ffc/types.h"

extern void func_ov007_021ae63c(int flag);
extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b1158(void *a, uint32_t b, uint32_t c, void *d, int e, void *f);
extern void *func_ov001_0218dde0(void *obj, int flag);
extern void func_02056bc0(void *object, void *node);
extern uint32_t *data_020b8e44;
extern uint32_t data_ov007_021c5fc4[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov007_021b20e0(uint8_t *p)
{
    void *r6;
    Pair v;

    func_ov007_021ae63c(1);
    r6 = func_0205681c(0xb4);
    if (r6 != 0) {
        r6 = func_ov007_021b1158(r6, *data_020b8e44, *(uint32_t *)(p + 0xb8), p + 0xd4, -1, p + 0xd8);
    }
    func_02056bc0(func_ov001_0218dde0(p, 0), r6);
    v = *(Pair *)data_ov007_021c5fc4;
    *(Pair *)(p + 0xb0) = v;
}
