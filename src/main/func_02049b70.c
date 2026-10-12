#include "ffc/types.h"

typedef struct { uint32_t a, b; } P2;

extern void func_02037538(void);
extern void func_02037544(void);
extern void func_02076248(void *a, uint32_t b);
extern void func_0203be8c(void);
extern void func_0203bea0(void);
extern void func_0204f550(uint32_t a);
extern uint32_t func_0203b67c(void);
extern uint32_t func_02049d04(void *p, P2 v, uint32_t c);
extern uint32_t func_02049d4c(void *p, P2 v, uint32_t c);
extern uint32_t func_0203b720(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056b10(void *owner);
extern void *func_0205681c(uint32_t a);
extern void *func_ov007_0219c47c(void *a, void *b, void *c);
extern uint32_t data_020b0090[];
extern uint32_t data_0213df18;
extern uint32_t data_020b0058[2];
extern uint32_t data_020b0060[2];
extern uint32_t data_020b0068[2];
extern uint32_t data_020b0070[2];
extern uint32_t data_020b0078[2];
extern uint32_t data_020b0080[2];
extern uint32_t data_020b0088[2];

void func_02049b70(uint8_t *self) {
    uint32_t r6, r7, t, loc;
    void *r4, *x, *p, *r;

    func_02037538();
    func_02037544();
    func_02076248(data_020b0090, 0x56444545);
    if (*(uint32_t *)(self + 0xa0) == 7) {
        func_0203be8c();
        func_0203bea0();
        func_0204f550(data_0213df18);
        { P2 *s = (P2 *)data_020b0058; *(P2 *)(self + 0x80) = *s; }
        return;
    }
    {
        uint8_t *q = self + 0x48;
        uint32_t v = q[0x12];
        v = (v & ~0xffu) | 1u;
        q[0x12] = (uint8_t)v;
        q = self + 0x14;
        v = q[0x12];
        v = (v & ~0xffu) | 1u;
        q[0x12] = (uint8_t)v;
    }
    *(uint32_t *)(self + 0xb8) = func_0203b67c();
    r6 = func_02049d04(self + 0x48, *(P2 *)data_020b0060, 0);
    r7 = func_02049d04(self + 0x14, *(P2 *)data_020b0068, 0);
    loc = func_02049d4c(self, *(P2 *)data_020b0070, 2);
    t = func_0203b720();
    r4 = *(void **)(self + 0xb8);
    func_02056bc0(r4, (void *)t);
    func_02056bc0(r4, (void *)loc);
    func_02056bc0(r4, (void *)r7);
    func_02056bc0(r4, (void *)r6);
    func_02056bc0(self + 0x48, *(void **)(self + 0xb8));
    if (*(uint32_t *)(self + 0xa0) == 0xd) {
        x = func_02056b10(*(void **)(self + 0xb8));
        func_02056bc0(self + 0x14, x);
        { P2 *s = (P2 *)data_020b0078; *(P2 *)(self + 0x80) = *s; }
        return;
    }
    if (*(uint32_t *)(self + 0xa0) == 0xe) {
        x = func_02056b10(*(void **)(self + 0xb8));
        func_02056bc0(self + 0x14, x);
        { P2 *s = (P2 *)data_020b0080; *(P2 *)(self + 0x80) = *s; }
        return;
    }
    p = func_0205681c(0xf0);
    r = p;
    if (p != 0) {
        r = func_ov007_0219c47c(p, self + 0xa0, self + 0xa4);
    }
    func_02056bc0(self + 0x14, r);
    { P2 *s = (P2 *)data_020b0088; *(P2 *)(self + 0x80) = *s; }
}
