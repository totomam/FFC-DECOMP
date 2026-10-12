#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint32_t a, b, c; } Trip;

extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t n);
extern void func_02005988(void *dst, uint32_t v);
extern void *func_02032d24(void *o, Pair s, void *c, uint32_t d, uint32_t e);
extern void *func_ov001_0218dde0(void *o, uint32_t n);
extern void func_02056bc0(void *o, void *node);
extern void *func_020059cc(void *o);
extern void *func_02033338(void *o, void *a, void *b, uint32_t c);
extern void func_02033440(void *o, Pair s);
extern void func_02033438(void *o, uint32_t a);
extern uint8_t *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c6398[2];
extern uint32_t data_ov007_021c63a0[2];

void func_ov007_021b3b7c(uint8_t *p) {
    Pair cfgB;
    Pair cfgA;
    Trip loc1;
    Trip loc2;
    uint32_t flag = 0;
    void *obj;
    void *o;
    uint32_t a0, a1;

    if (*(uint32_t *)(data_020b93b8 + 0x74) == 0) {
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            uint32_t v = func_020159c8(data_020b8e44, 0x150);
            func_02005988(&loc1, v);
            cfgA.a = 0x80;
            cfgA.b = 0x60;
            obj = func_02032d24(obj, cfgA, &loc1, 4, 0);
            flag = 1;
        }
        o = func_ov001_0218dde0(p, 2);
        func_02056bc0(o, obj);
        if (flag) {
            func_020059cc(&loc1);
        }
        a0 = data_ov007_021c6398[0];
        a1 = data_ov007_021c6398[1];
        *(uint32_t *)(p + 0xb0) = a0;
        *(uint32_t *)(p + 0xb4) = a1;
        return;
    }

    *(uint32_t *)(p + 0xc4) = 0;
    obj = func_0205681c(0xb8);
    if (obj != 0) {
        uint32_t v = func_020159c8(data_020b8e44, 0x151);
        func_02005988(&loc2, v);
        obj = func_02033338(obj, &loc2, p + 0xc4, 0);
        flag = 1;
    }
    if (flag) {
        func_020059cc(&loc2);
    }
    cfgB.a = 0x80;
    cfgB.b = 0x70;
    func_02033440(obj, cfgB);
    func_02033438(obj, 1);
    o = func_ov001_0218dde0(p, 2);
    func_02056bc0(o, obj);
    a0 = data_ov007_021c63a0[0];
    a1 = data_ov007_021c63a0[1];
    *(uint32_t *)(p + 0xb0) = a0;
    *(uint32_t *)(p + 0xb4) = a1;
}
