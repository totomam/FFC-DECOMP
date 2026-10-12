#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair8;

typedef struct {
    uint8_t b0;
    uint8_t b1;
    uint8_t pad0[2];
    uint32_t w4;
    uint32_t w8;
    uint8_t pad1[0x11];
    uint8_t b1d;
    uint8_t pad2[0x0e];
    Pair8 pairs[3];
} Obj6;

extern void *data_020b8e44;
extern void *func_02015c98(void *unused, uint32_t index);
extern uint32_t func_ov002_021a1868(uint8_t *self, uint32_t x);
extern uint32_t func_ov002_021a16d4(const void *object);
extern uint32_t func_ov002_02195fa4(uint32_t x);
extern uint32_t func_ov002_02198700(uint32_t x, uint32_t y);
extern void func_ov002_021c9124(void *p);
extern void func_ov002_021c9130(void *p);
extern int func_ov002_021c9164(void *p);
extern uint32_t func_ov002_021c9234(uint32_t i, void *arr, uint32_t f);
extern uint32_t func_02055a2c(uint32_t x, uint32_t y);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_ov002_021a464c(uint8_t *self, uint32_t f);
extern int func_ov002_021aa820(uint32_t x);
extern uint32_t func_ov002_021ac8d8(const void *first, const void *second);
extern void func_ov002_021c8e70(void *o, void *a1, uint32_t a2, uint32_t a3,
    uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4,
    uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8, uint32_t s9,
    uint32_t s10, uint32_t s11, uint32_t s12, uint32_t s13, uint32_t s14);
extern uint32_t func_ov002_021c939c(void *p, void *obj);
extern void func_ov002_021c8f10(void *obj);

void func_ov002_021a8848(uint8_t *self, Obj6 *p6, uint32_t *arg2, uint32_t arg3)
{
    uint32_t r4, r7, r5;
    uint32_t obj[22];
    Pair8 items[3];
    uint32_t arr6[6];
    Pair8 tmp2;
    Pair8 tmp;
    uint32_t a;
    uint32_t b;
    uint32_t sp50;
    uint32_t sp4c;
    uint32_t sp48;

    func_02015c98(data_020b8e44, arg3);
    a = func_ov002_021a1868(self, arg2[1]);
    b = func_ov002_02198700(func_ov002_02195fa4(func_ov002_021a16d4(self)), arg2[2]);

    func_ov002_021c9124(&items[0]);
    func_ov002_021c9124(&items[1]);
    func_ov002_021c9124(&items[2]);
    for (int i = 0; i < 3; i++) {
        func_ov002_021c9124(&tmp);
        items[i].a = tmp.a;
        items[i].b = tmp.b;
        func_ov002_021c9130(&tmp);
    }

    sp50 = 1;
    for (int i = 0; i < 3; i++) {
        tmp2.a = p6->pairs[i].a;
        tmp2.b = p6->pairs[i].b;
        if (func_ov002_021c9164(&tmp2) != 1) {
            sp50 = 0;
            items[i].a = tmp2.a;
            items[i].b = tmp2.b;
        }
        func_ov002_021c9130(&tmp2);
    }

    for (int i = 0; i < 6; i++) {
        arr6[i] = 0;
    }
    arr6[0] = arg2[1];
    arr6[1] = arg2[2];
    sp48 = 1;
    func_02056bc0(self + 0x14, func_02055a2c(*(uint32_t *)(self + 0xf0), func_ov002_021c9234(0, arr6, 1)));
    func_02056bc0(self + 0x14, func_ov002_021a464c(self, 1));

    if ((int)func_ov002_021aa820(b) > 0) {
        sp48 = 0;
    }
    r5 = 1;
    if ((int)func_ov002_021aa820(a) > 0) {
        r5 = 0;
    }
    sp4c = func_ov002_021ac8d8((const void *)a, (const void *)b);

    r7 = 8;
    r4 = 0;
    switch (func_ov002_021c9164(&items[0])) {
    case 0:
        r7 = 6;
        break;
    case 1:
        r7 = 0;
        r4 = 1;
        break;
    case 2:
        r7 = 4;
        break;
    }

    func_ov002_021c8e70(obj, arg2, arg3, r7,
        sp50, 0, sp48, 0, 0, r5, 1, 0, sp4c, (void *)items,
        p6->b1d, p6->b1, p6->w4, p6->w8, r4);

    func_02056bc0(self + 0x14, func_02055a2c(*(uint32_t *)(self + 0xf0), func_ov002_021c939c(self ? self + 0x80 : 0, obj)));

    func_ov002_021c8f10(obj);
    func_ov002_021c9130(&items[2]);
    func_ov002_021c9130(&items[1]);
    func_ov002_021c9130(&items[0]);
}
