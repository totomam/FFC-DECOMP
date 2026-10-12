#include "ffc/types.h"

extern void func_020376e0(void);
extern void func_ov015_021d77d8(void);
extern void func_ov015_021d77e0(void *a, void *b);
extern uint32_t func_ov015_021d786c(void *a, void *b);
extern uint32_t func_ov015_021d7810(void *a, void *b);
extern void func_020376f0(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void func_020059cc(void *object);
extern void *func_02033438(void *a, uint32_t b);
extern void func_0206047c(void *a);
extern void func_02060548(void *a, uint32_t b);
extern void func_02060574(void *a, uint32_t b);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021a60c4(void);
extern void func_ov007_021a60b8(void);
extern void func_ov007_021a60bc(void);
extern uint32_t data_020b8e44;
extern void *data_0213df20;
extern uint32_t *data_ov007_021c9708;
extern uint32_t data_ov007_021c4350[2];

typedef uint32_t (*VFn)(void *);

void func_ov007_021a6244(uint8_t *p)
{
    void *r4;
    void *obj;
    uint32_t t;
    uint32_t flag;
    uint32_t one;
    uint32_t local[3];
    uint32_t *vt;

    func_020376e0();
    func_ov015_021d77d8();
    func_ov015_021d77e0((void *)func_ov007_021a60b8, (void *)func_ov007_021a60c4);
    t = func_ov015_021d786c(p + 0x90, p);
    *(uint32_t *)(p + 0xac) = t;
    if (t == 0) {
        func_ov015_021d77e0((void *)func_ov007_021a60bc, (void *)func_ov007_021a60c4);
        t = func_ov015_021d7810(p + 0x90, p);
        *(uint32_t *)(p + 0xac) = t;
    }
    func_020376f0();
    one = 1;
    *(uint32_t *)(p + 0xa0) = one;
    flag = 0;
    r4 = func_0205681c(0xb8);
    if (r4 != 0) {
        uint32_t r1 = func_020159c8(data_020b8e44, 3);
        func_02005988(local, r1);
        r4 = func_02033338(r4, local, p + 0xa0, 0);
        flag = one;
    }
    if (flag != 0) {
        func_020059cc(local);
    }
    func_02033438(r4, 1);
    func_0206047c(*(void **)((uint8_t *)data_0213df20 + 0x20));
    func_02060548(*(void **)((uint8_t *)data_0213df20 + 0x20), 3);
    obj = *(void **)((uint8_t *)data_0213df20 + 0x20);
    vt = (uint32_t *)data_ov007_021c9708[0];
    t = ((VFn)vt[0x34 / 4])(data_ov007_021c9708);
    func_02060574(obj, t);
    obj = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 0, 8, 10, 0, 0);
    func_02056bc0(p + 0x14, obj);
    func_02056bc0(p + 0x14, r4);
    *(uint32_t *)(p + 0x80) = data_ov007_021c4350[0];
    *(uint32_t *)(p + 0x84) = data_ov007_021c4350[1];
}
