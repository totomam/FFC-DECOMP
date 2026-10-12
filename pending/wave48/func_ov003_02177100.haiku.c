#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_0203c304(void);
extern void func_02059698(uint32_t r0, uint32_t r1);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_ov003_02177220(void *obj, Pair d);
extern uint32_t func_ov003_0214d454(uint32_t x);
extern uint32_t func_ov003_02146494(uint32_t x);
extern uint32_t func_ov003_02177260(uint32_t x, Pair d);
extern uint32_t func_ov003_02173f18(uint32_t x, Pair d, uint32_t z);
extern uint32_t func_ov003_02177024(uint32_t x, Pair d, uint32_t z);
extern uint32_t func_ov003_02167048(uint32_t x, Pair d, uint32_t z, uint32_t w, uint32_t v);
extern uint32_t func_0203b720(void);
extern void func_02056bc0(void *obj, uint32_t node);
extern Pair data_ov003_0217bc20;
extern Pair data_ov003_0217bc28;
extern Pair data_ov003_0217bc30;
extern Pair data_ov003_0217bc38;
extern Pair data_ov003_0217bc40;
extern uint32_t data_0213df18;
extern Pair data_ov003_0217bc48;

void func_ov003_02177100(void *p) {
    uint8_t *s = (uint8_t *)p;
    uint32_t v8, v12, v16, v20, v24, v28, r7, r4, r6, t;
    uint32_t *q;
    uint32_t zero = 0;

    t = func_0203c304();
    q = *(uint32_t **)(s + 0x80);
    func_02059698(t, *(uint32_t *)(*(uint32_t *)((uint8_t *)q + 0x214)));
    r4 = func_02056aec(p);
    r6 = func_ov003_02177220(p, data_ov003_0217bc20);
    v8 = func_ov003_02177220(p, data_ov003_0217bc28);
    v12 = func_ov003_0214d454(*(uint32_t *)(s + 0x80));
    t = func_ov003_02146494(*(uint32_t *)(s + 0x80));
    v16 = func_ov003_02177260(t, data_ov003_0217bc30);
    t = func_ov003_02146494(*(uint32_t *)(s + 0x80));
    v20 = func_ov003_02173f18(t, data_ov003_0217bc38, 0);
    v24 = func_ov003_02177024(data_0213df18, data_ov003_0217bc40, 0);
    r7 = func_ov003_02167048(*(uint32_t *)(s + 0x80), data_ov003_0217bc48, 0, zero, 2);
    v28 = func_ov003_0214d454(*(uint32_t *)(s + 0x80));
    t = func_0203b720();
    p = (uint8_t *)p + 0x14;
    func_02056bc0(p, t);
    func_02056bc0(p, v28);
    func_02056bc0(p, r7);
    func_02056bc0(p, v24);
    func_02056bc0(p, v20);
    func_02056bc0(p, v16);
    func_02056bc0(p, v12);
    func_02056bc0(p, v8);
    func_02056bc0(p, r6);
    func_02056bc0(p, r4);
}
