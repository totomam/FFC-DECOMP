#include "ffc/types.h"

extern void func_020559d4(void *p);
extern void func_ov001_0218def8(void *p, int v);
extern uint32_t func_0203b72c(void);
extern void func_02056bc0(void *object, void *node);

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov001_021946a0;

void func_ov001_0218b1a0(uint8_t *p)
{
    uint32_t r6;
    uint32_t t;
    uint8_t *r4;

    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);

    ((void (*)(void *))((*(void ***)p)[20]))(p);
    func_ov001_0218def8(p, 0);
    r6 = ((uint32_t (*)(void *))((*(void ***)p)[16]))(p);

    t = func_0203b72c();
    r4 = p + 0x14;
    func_02056bc0(r4, (void *)t);
    func_02056bc0(r4, (void *)r6);

    *(Pair *)(p + 0xf4) = data_ov001_021946a0;
}
