#include "ffc/types.h"

extern void func_ov004_021489e0(void *p);
extern void *func_0203b744(void);
extern void *func_02056b10(void *owner);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov004_021546a8(void *a, uint32_t b, uint32_t c);
extern void *func_0206c270(void *p);

typedef struct { uint32_t x; uint32_t y; } Pair;
extern Pair data_ov004_02159c90;
extern Pair data_ov004_02159c98;

void func_ov004_0215461c(uint8_t *a)
{
    void *sp0;
    void *r4;
    void *r7;
    void *t;
    Pair *d;
    uint8_t *p;
    uint32_t v0;
    uint32_t v1;

    func_ov004_021489e0(*(void **)(a + 0xf8));
    sp0 = func_0203b744();
    r4 = func_02056b10(*(void **)(a + 0x210));
    r7 = func_0203b6fc();
    func_02056bc0(r7, r4);
    func_02056bc0(r7, sp0);
    func_02056bc0(a + 0x14, r7);

    if (*(void **)(a + 0x210 + 0x7c) != 0) {
        d = &data_ov004_02159c90;
        r7 = func_ov004_021546a8(*(void **)(a + 0x210 + 0x80), d->x, d->y);
        t = func_0206c270(*(void **)(a + 0x210 + 0x7c));
        p = a + 0x14;
        func_02056bc0(p, t);
        func_02056bc0(p, r7);
    }

    v0 = data_ov004_02159c98.x;
    v1 = data_ov004_02159c98.y;
    *(uint32_t *)(a + 0x94) = v0;
    *(uint32_t *)(a + 0x98) = v1;
}
