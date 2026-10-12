#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} DataPair;

extern DataPair data_ov013_021c4e9c;
extern uint32_t func_02056aec(void *p);
extern void *func_ov013_021be2dc(uint32_t a, DataPair b);
extern uint32_t func_0206cbf4(uint32_t x);
extern uint32_t func_0206d774(uint32_t x);
extern void *func_0203b688(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_020655b8(uint32_t x);
extern uint32_t func_020655dc(uint32_t x, uint32_t y, uint32_t z);
extern void *func_02021610(uint32_t a, uint32_t b);
extern void *func_0203b6fc(void);

void func_ov013_021c2a2c(uint8_t *a)
{
    void *r4;
    void *r6;
    void *r7;
    uint32_t t0;
    uint32_t t4;
    uint32_t t8;
    uint32_t tc;
    uint8_t *q;
    uint8_t *p;

    t0 = func_02056aec(a);
    r6 = func_ov013_021be2dc(*(uint32_t *)(a + 0xf0), data_ov013_021c4e9c);
    t4 = func_0206cbf4(*(uint32_t *)(a + 0xf4));
    r4 = (void *)func_0206d774(*(uint32_t *)(a + 0xf4));
    r7 = func_0203b688();
    func_02056bc0(r7, r4);
    func_02056bc0(r7, (void *)t4);
    func_02056bc0(r7, r6);
    q = *(uint8_t **)(a + 0x128);
    t8 = func_020655b8(*(uint32_t *)(q + 0x94));
    tc = func_020655dc(*(uint32_t *)(q + 0x94), 4, 0);
    r4 = func_02021610(0xb3, 0);
    r6 = func_0203b688();
    func_02056bc0(r6, r4);
    func_02056bc0(r6, (void *)tc);
    func_02056bc0(r6, (void *)t8);
    r4 = func_0203b6fc();
    func_02056bc0(r4, r6);
    func_02056bc0(r4, r7);
    p = a + 0x14;
    func_02056bc0(p, r4);
    func_02056bc0(p, (void *)t0);
}
