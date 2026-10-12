#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef struct {
    S ab;
    uint32_t b1[3];
    uint32_t b2[3];
    uint32_t b3[3];
} Loc;

extern void *func_0205681c(uint32_t id);
extern void *func_02031624(void *a, void *b, S c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_020159c8(void *mgr, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *obj, uint32_t idx, void *buf);
extern void *func_020059cc(void *object);
extern void *func_ov010_021bee0c(void *self, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern int32_t data_ov010_021d1708[];
extern void *data_020b8e44;
extern uint32_t data_ov010_021d18a8[];

void func_ov010_021becbc(void *self, int32_t p)
{
    uint8_t *s = (uint8_t *)self;
    void *obj = *(void **)(s + 0xf4);
    void (**vt)(void *) = *(void (***)(void *))obj;
    Loc L;
    void *r6;
    void *t;
    uint32_t n;
    uint32_t id;
    uint32_t v;
    void *node;
    int32_t rem, quo;

    vt[11](obj);

    *(int32_t *)(s + 0x12c) = p + (*(int32_t *)(s + 0xf8) << 3);
    *(int32_t *)(s + 0x130) = 1;

    r6 = func_0205681c(0x118);
    if (r6 != 0) {
        rem = p % 4;
        quo = p / 4;
        L.ab.a = data_ov010_021d1708[3] + rem * data_ov010_021d1708[19] + quo * data_ov010_021d1708[9] + data_ov010_021d1708[15];
        L.ab.b = data_ov010_021d1708[4] + rem * data_ov010_021d1708[20] + quo * data_ov010_021d1708[10] + data_ov010_021d1708[16];
        r6 = func_02031624(r6, s + 0x130, L.ab, 0, 0, 0);
    }

    v = ((uint32_t *)(*(void **)(s + 0x11c)))[*(uint32_t *)(s + 0x12c)];
    id = (((v << 1) >> 31) == 1) ? 0x96 : 0x95;

    t = func_020159c8(data_020b8e44, id);
    func_02005988(L.b1, t);
    func_02031754(r6, 1, L.b1);
    func_020059cc(L.b1);

    t = func_020159c8(data_020b8e44, 0x94);
    func_02005988(L.b2, t);
    func_02031754(r6, 2, L.b2);
    func_020059cc(L.b2);

    n = 0x97;
    t = func_020159c8(data_020b8e44, n);
    func_02005988(L.b3, t);
    n -= 0x99;
    func_02031754(r6, n, L.b3);
    func_020059cc(L.b3);

    node = func_ov010_021bee0c(self, data_ov010_021d18a8[0], data_ov010_021d18a8[1]);
    func_02056bc0(s + 0x14, r6);
    func_02056bc0(s + 0x14, node);
}
