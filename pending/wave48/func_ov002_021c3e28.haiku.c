#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t p0;
    uint32_t p1;
    uint32_t p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t p5;
    uint32_t p6;
    uint32_t p7;
    uint32_t p8;
} Frame;

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
extern uint32_t func_0203b6fc(void);
extern uint32_t func_02062a78(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056b34(void *p);
extern void func_0203c2bc(void);
extern void *func_02060610(void);
extern void *func_0205681c(uint32_t n);
extern Pair data_ov002_021d71a8[];
extern Pair data_ov002_021d71b8[];
extern Pair data_ov002_021d71d8[];
extern Pair data_ov002_021d71c8[];
extern uint32_t data_ov002_021d71f0[];

void func_ov002_021c3e28(uint8_t *a)
{
    uint32_t r7;
    uint8_t *r6;
    uint8_t *obj;
    int r4;
    uint32_t idx;
    uint32_t ret;
    void *node;
    Frame f;
    uint32_t t0;
    uint32_t t1;

    *(uint32_t *)(a + 0x80) = 0;
    obj = *(uint8_t **)(a + 0xd4);
    r6 = obj + 0x1c;
    r7 = obj[0x12];
    if (r7 != 0) {
        func_0208763c(r6);
    }
    r4 = (*(uint32_t *)(obj + 0x14) == 0);
    if (r7 != 0) {
        func_02087678(r6);
    }
    if (r4 != 0 || *(uint32_t *)(a + 0x138) == 2) {
        return;
    }
    *(uint32_t *)(a + 0x138) = 2;
    func_02056c4c(*(void **)(a + 0xd0));
    {
        uint32_t *e = *(uint32_t **)(a + 0xe0);
        e[3] = (e[3] & ~0xffu) | 1;
    }
    r4 = (int)func_0203b6fc();
    idx = *(uint32_t *)(a + 0x84);
    t0 = data_ov002_021d71a8[idx].a;
    t1 = data_ov002_021d71a8[idx].b;
    ret = func_02062a78(*(void **)(a + 0xd8), t0, t1, t0, t1 + 0x28, 0x14, 2);
    func_02056bc0((void *)r4, (void *)ret);
    idx = *(uint32_t *)(a + 0x84);
    t0 = data_ov002_021d71b8[idx].a;
    t1 = data_ov002_021d71b8[idx].b;
    ret = func_02062a78(*(void **)(a + 0xe0), t0, t1, t0, t1 + 0x28, 0x14, 2);
    func_02056bc0((void *)r4, (void *)ret);
    idx = *(uint32_t *)(a + 0x84);
    t0 = data_ov002_021d71d8[idx].a;
    t1 = data_ov002_021d71d8[idx].b;
    ret = func_02062a78(*(void **)(a + 0xdc), data_ov002_021d71c8[idx].a, data_ov002_021d71c8[idx].b, t0, t1, 0x14, 2);
    func_02056bc0((void *)r4, (void *)ret);
    func_02056bc0(*(void **)(a + 0xd0), (void *)r4);
    node = func_02056b34(*(void **)(a + 0xd4));
    func_02056bc0(*(void **)(a + 0xd0), node);
    func_0203c2bc();
    node = func_02060610();
    func_02056bc0(*(void **)(a + 0xd0), node);
    node = func_0205681c(0x1c);
    if (node != 0) {
        uint32_t *n = (uint32_t *)node;
        n[3] &= ~0xffu;
        n[0] = (uint32_t)data_ov002_021d71f0;
        n[5] = (uint32_t)(a + 0x138);
        n[6] = 0;
    }
    func_02056bc0(*(void **)(a + 0xd0), node);
}
