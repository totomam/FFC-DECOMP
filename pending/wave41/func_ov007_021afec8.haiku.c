#include "ffc/types.h"

extern void *func_0203b688(void *a);
typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;
extern uint32_t func_ov007_021aff44(void *a, Pair v);
extern uint32_t func_020215f0(void);
extern uint32_t func_020215cc(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218ed2c(void *obj, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c5aac;
extern uint32_t *data_020b8e44;

void *func_ov007_021afec8(void *a)
{
    void *r4;
    uint32_t s8;
    uint32_t r7;
    uint32_t r6;
    void *n;

    r4 = func_0203b688(a);
    r6 = func_ov007_021aff44(a, data_ov007_021c5aac);
    r7 = func_020215f0();
    s8 = func_020215cc(0x19);
    n = func_0205681c(0xb8);
    if (n != 0) {
        n = func_ov001_0218ed2c(n, *data_020b8e44, *(uint32_t *)((uint8_t *)a + 0xb8),
                                (uint8_t *)a + 0xc8, 1, 0);
    }
    func_02056bc0(r4, n);
    func_02056bc0(r4, (void *)s8);
    func_02056bc0(r4, (void *)r7);
    func_02056bc0(r4, (void *)r6);
    return r4;
}
