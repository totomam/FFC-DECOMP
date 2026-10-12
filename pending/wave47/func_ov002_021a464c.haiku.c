#include "ffc/types.h"

typedef struct Obj {
    uint32_t vtbl;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
} Obj;

extern void *func_0203b6fc(void);
extern uint32_t func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern void *func_02055a2c(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020ac098;
extern uint32_t data_020ac3b8;
extern uint32_t data_0209df5c;
extern uint32_t data_0209dfa8;
extern uint32_t data_0209dfcc;
extern uint32_t data_0209dfec;
extern uint32_t data_0209e000;

void *func_ov002_021a464c(uint8_t *p, uint32_t flag) {
    void *obj = func_0203b6fc();
    void *r6 = (void *)func_0203bd04(0x1014f, 0, 0, 1);
    Obj *a;
    Obj *b;

    if (flag) {
        a = (Obj *)func_0205681c(0x2c);
        if (a) {
            a->f8 = 0;
            a->fc = 0x1014e;
            a->vtbl = (uint32_t)&data_020ac098;
            a->f10 = (uint32_t)(r6 ? (uint8_t *)r6 + 0x14 : 0);
            a->f14 = 0;
            a->f18 = 0;
            a->f1c = (uint32_t)-1;
            a->f20 = data_0209df5c;
            a->f24 = data_0209dfa8;
            a->f28 = data_0209dfcc;
        }
        func_02056bc0(obj, func_02055a2c(*(uint32_t *)(p + 0xf0)));
        b = (Obj *)func_0205681c(0x10);
        if (b) {
            b->f8 = 0;
            b->fc = 0x1015d;
            b->vtbl = (uint32_t)&data_020ac3b8;
        }
    } else {
        a = (Obj *)func_0205681c(0x2c);
        if (a) {
            a->f8 = 0;
            a->fc = 0x1014e;
            a->vtbl = (uint32_t)&data_020ac098;
            a->f10 = (uint32_t)(r6 ? (uint8_t *)r6 + 0x14 : 0);
            a->f14 = 0;
            a->f18 = 0;
            a->f1c = (uint32_t)-1;
            a->f20 = 0;
            a->f24 = data_0209dfec;
            a->f28 = data_0209e000;
        }
    }
    func_02056bc0(obj, func_02055a2c(*(uint32_t *)(p + 0xf0)));
    func_02056bc0(obj, r6);
    return obj;
}
