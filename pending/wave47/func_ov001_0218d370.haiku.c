#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_020375a4(void *p);
extern void func_0203775c(void *p);
extern void func_02037fec(void *p, void *q);
extern void func_02037f40(void *object);
extern void func_ov001_0218cab0(void *p);
extern void *func_ov001_0218d0dc(void *p);
extern uint32_t func_ov001_0218ada0(void *obj, Pair p);
extern void func_ov001_0218c408(void *obj, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void *func_021959c0(void *a, void *b, void *c, uint32_t d, void *e, void *f, void *g);
extern void *data_020b8e44;
extern Pair data_ov001_021948e4;
extern uint8_t data_ov001_021959a8[];
extern Pair data_ov001_021948ec;
extern Pair data_ov001_021948f4;

void func_ov001_0218d370(uint8_t *a)
{
    uint8_t buf[0x32c];
    void *r;

    func_020375a4(a);
    func_0203775c(buf);
    func_02037fec(a + 0xb4c, buf);
    func_02037f40(buf);
    func_ov001_0218cab0(a);
    *(uint32_t *)(a + 0xe50) = 2;
    *(uint32_t *)(a + 0xe54) = 0;
    r = func_ov001_0218d0dc(a);
    func_ov001_0218c408(r, func_ov001_0218ada0(data_020b8e44, data_ov001_021948e4));

    r = func_0205681c(1000);
    if (r != 0) {
        r = func_021959c0(r, a + 0xb4c, a + 0x66c, 0, a + 0x670, a + 0x671, data_ov001_021959a8);
    }
    func_ov001_0218c408(func_ov001_0218d0dc(a), (uint32_t)r);

    r = func_ov001_0218d0dc(a);
    func_ov001_0218c408(r, func_ov001_0218ada0(data_020b8e44, data_ov001_021948ec));

    *(Pair *)(a + 0xb0) = data_ov001_021948f4;
}
