#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;

extern void *func_020215f0(void *a);
extern void *func_020215cc(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov001_0218ed2c(void *obj, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern S2 data_ov007_021c5b78;

void func_ov007_021b0848(void *a)
{
    uint8_t *r5 = (uint8_t *)a;
    uint8_t *r4;
    void *r7;
    void *r6;
    void *node;
    r6 = func_020215f0(a);
    r7 = func_020215cc(0x19);
    node = func_0205681c(0xb8);
    if (node != 0) {
        node = (void *)func_ov001_0218ed2c(node, *(uint32_t *)data_020b8e44,
                                           *(uint32_t *)(r5 + 0xb8), r5 + 0xc8, 1, 0);
    }
    r4 = r5 + 0x14;
    func_02056bc0(r4, node);
    func_02056bc0(r4, r7);
    func_02056bc0(r4, r6);
    *(S2 *)(r5 + 0xb0) = data_ov007_021c5b78;
}
