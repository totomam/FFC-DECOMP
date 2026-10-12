#include "ffc/types.h"

extern void func_ov002_021d30f0(void *self, uint32_t a, uint32_t b);
extern uint32_t func_0206bf18(void);
extern uint32_t func_02037748(void);
extern uint32_t func_02037700(uint32_t x);
extern uint32_t func_02038b48(const void *object);
extern void func_02038588(uint32_t a, uint32_t b, uint32_t c);
extern void func_02038b5c(uint32_t a, uint32_t *b, uint32_t c);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_0206bf50(uint32_t a, uint32_t b);
extern char data_ov002_021d78a8[];
extern char data_ov002_021d78c0[];

void *func_ov002_021c95bc(void *self, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t sp0;
    int32_t i;
    uint32_t r;
    uint32_t s;
    uint32_t h;

    func_ov002_021d30f0(p, a2, a3);
    *(void **)(p + 0x00) = (void *)data_ov002_021d78a8;
    *(void **)(p + 0x80) = (void *)data_ov002_021d78c0;
    *(uint32_t *)(p + 0xd0) = a1;
    *(uint32_t *)(p + 0xd4) = 0;
    *(uint32_t *)(p + 0xd8) = 0;
    *(uint32_t *)(p + 0xdc) = 0;
    *(uint32_t *)(p + 0xe0) = 0;
    *(uint32_t *)(p + 0xe4) = 0;
    *(uint32_t *)(p + 0x100) = 0;
    for (i = 0; i < 6; i++) {
        *(uint32_t *)(p + 0xe8 + i * 4) = 0;
    }
    *(uint32_t *)(p + 0x108) = 0;
    for (i = 0; i < 4; i++) {
        uint8_t *base = *(uint8_t **)(p + 0xd0);
        uint32_t v = *(uint32_t *)(p + 0xb8);
        uint8_t *q = base + v * 0x160;
        *(uint8_t *)(p + 0xcc + i) = q[i + 0x168];
    }
    sp0 = func_0206bf18();
    {
        uint8_t *base = *(uint8_t **)(p + 0xd0);
        uint32_t v = *(uint32_t *)(p + 0xb8);
        r = *(uint32_t *)(base + v * 0x160 + 0x170);
    }
    if (r != 0) {
        sp0 = r;
    }
    h = func_02037748();
    if (h != 0) {
        r = func_02037700(h);
        s = func_02038b48((const void *)r);
        switch (s) {
        case 1:
            r = func_02037700(s);
            func_02038588(r, sp0, a2);
            break;
        case 2:
            r = func_02037700(s);
            func_02038b5c(r, &sp0, a2);
            break;
        }
    }
    r = func_0205681c(8);
    if (r != 0) {
        r = func_0206bf50(r, sp0);
    }
    *(uint32_t *)(p + 0x104) = r;
    return p;
}
