#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Loc;
typedef struct { uint32_t a, b; } Pair;

extern void *func_0203b81c(uint32_t size);
extern void *func_0205f8e0(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *object, uint32_t value);
extern void func_ov007_021a75ec(void *obj, void *self, void *local, uint32_t v);
extern void *func_020059cc(void *object);
extern void func_020695ec(void *self, void *obj);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern void func_020696e0(void *object, uint8_t value);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_020697ac(void *self, void *obj);
extern uint32_t data_ov007_021c43e8[];
extern uint8_t data_ov007_021c4504[];
extern uint8_t data_ov007_021c45a0[];
extern uint8_t data_ov007_021c456c[];
extern uint32_t data_ov007_021c43fc[];

void func_ov007_021a7420(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t *d = data_ov007_021c43e8;
    void *obj;
    Loc loc1;
    Loc loc2;
    Loc loc3;
    Pair pr;
    void *tmp;

    *(void **)(s + 0xb8) = func_0203b81c(0x3c);
    ((uint8_t *)*(void **)(s + 0xb8))[0x3c] = 1;
    func_02056bc0(s + 0x14, func_0205f8e0(*(void **)(s + 0xb8)));

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(&loc1, d[3]);
        pr = *(Pair *)&d[7];
        func_ov007_021a75ec(obj, self, &loc1, pr.a);
        func_020059cc(&loc1);
        *(void **)obj = data_ov007_021c4504;
    }
    *(void **)(s + 0xbc) = obj;
    func_020695ec(self, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(&loc2, d[4]);
        pr = *(Pair *)&d[9];
        func_ov007_021a75ec(obj, self, &loc2, pr.a);
        func_020059cc(&loc2);
        *(void **)obj = data_ov007_021c45a0;
    }
    *(void **)(s + 0xc0) = obj;
    func_020695ec(self, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(&loc3, d[2]);
        pr = *(Pair *)&d[11];
        func_ov007_021a75ec(obj, self, &loc3, pr.a);
        func_020059cc(&loc3);
        *(void **)obj = data_ov007_021c456c;
        tmp = *(void **)((uint8_t *)obj + 0x98);
        ((void (*)(void *, uint32_t, uint32_t))(*(void **)((uint8_t *)*(void **)tmp + 0x38)))(tmp, 2, 0);
        func_02069320(obj, 2);
        func_02069404(obj, 4);
    }
    *(void **)(s + 0xc4) = obj;
    func_020695ec(self, obj);
    func_020696e0(self, 1);

    obj = func_0203b95c(d[1], *(void **)(s + 0xb8), 0, 1);
    ((void (*)(void *, uint32_t))(*(void **)((uint8_t *)*(void **)obj + 0x20)))(obj, 3);
    ((void (*)(void *, uint32_t))(*(void **)((uint8_t *)*(void **)obj + 0x3c)))(obj, 3);
    ((void (*)(void *, uint32_t, uint32_t))(*(void **)((uint8_t *)*(void **)obj + 0xc)))(obj, data_ov007_021c43fc[0], data_ov007_021c43fc[1]);
    ((void (*)(void *, uint32_t, uint32_t))(*(void **)((uint8_t *)*(void **)obj + 0x38)))(obj, 1, 0);
    ((void (*)(void *))(*(void **)((uint8_t *)*(void **)obj + 0x28)))(obj);

    func_02056bc0(s + 0x48, obj);

    tmp = *(void **)(s + 0xc8);
    switch (*(uint32_t *)tmp) {
    case 0:
        func_020697ac(self, *(void **)(s + 0xc4));
        break;
    case 2:
        func_020697ac(self, *(void **)(s + 0xc0));
        break;
    default:
        func_020697ac(self, *(void **)(s + 0xbc));
        break;
    }

    func_02056bc0(s + 0x48, *(void **)(s + 0xb8));
}
