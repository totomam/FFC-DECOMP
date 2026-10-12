#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov011_021c02a8(void *a, uint32_t x, uint32_t y);
extern void *func_0203b720(void);
extern void *func_0203b688(void);
extern uint32_t func_ov011_021c1bbc(void *a, uint32_t x, uint32_t y, void *r3);
extern uint32_t data_ov011_021cb184[];
extern uint32_t data_ov011_021cb18c[];

typedef void (*vfn_t)(void *);

void func_ov011_021c1c04(uint8_t *a, void *b)
{
    uint32_t *d;
    uint32_t t;
    void *r4;
    void *r6;
    void *obj;

    if (*(uint32_t *)(a + 0x2bc) != 0x12) {
        return;
    }
    obj = *(void **)(a + 0x2b4);
    if (obj != 0) {
        ((vfn_t)((void **)*(void **)obj)[11])(obj);
        d = data_ov011_021cb184;
        t = func_ov011_021c02a8(a, d[0], d[1]);
        r4 = func_0203b720();
        r6 = func_0203b688();
        func_02056bc0(r6, r4);
        func_02056bc0(r6, (void *)t);
        func_02056bc0(a + 0x14, r6);
    }
    obj = *(void **)(a + 0x17c);
    ((vfn_t)((void **)*(void **)obj)[11])(obj);
    d = data_ov011_021cb18c;
    t = func_ov011_021c1bbc(a, d[0], d[1], b);
    func_02056bc0(a + 0x14, (void *)t);
}
