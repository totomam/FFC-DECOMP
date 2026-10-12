#include "ffc/types.h"

extern void func_ov004_021489e0(void *p);
extern void *func_0203b744(void);
extern void *func_02056b10(void *owner);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206c270(void *p);

typedef struct { uint32_t x; uint32_t y; } Pair;
extern void *func_ov004_021546a8(void *a, Pair b);
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
        r7 = func_ov004_021546a8(*(void **)(a + 0x210 + 0x80), data_ov004_02159c90);
        t = func_0206c270(*(void **)(a + 0x210 + 0x7c));
        p = a + 0x14;
        func_02056bc0(p, t);
        func_02056bc0(p, r7);
    }

    *(Pair *)(a + 0x94) = data_ov004_02159c98;
}
