/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Loc;
typedef struct { uint32_t a, b; } Pair;

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(Pair p);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(uint32_t a);
    virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual void v14(uint32_t a, uint32_t b);
    virtual void v15(uint32_t a);
};
extern "C" void *func_0203b81c(uint32_t size);
extern "C" void *func_0205f8e0(void *obj);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void *func_0205681c(uint32_t size);
extern "C" void func_02005988(void *object, uint32_t value);
extern "C" void func_ov007_021a75ec(void *obj, void *self, void *local, Pair v);
extern "C" void *func_020059cc(void *object);
extern "C" void func_020695ec(void *self, void *obj);
extern "C" void func_02069320(void *object, uint32_t value);
extern "C" void func_02069404(void *object, uint32_t value);
extern "C" void func_020696e0(void *object, uint8_t value);
extern "C" void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern "C" void func_020697ac(void *self, void *obj);
extern uint32_t data_ov007_021c43e8[];
extern uint8_t data_ov007_021c4504[];
extern uint8_t data_ov007_021c45a0[];
extern uint8_t data_ov007_021c456c[];
extern uint32_t data_ov007_021c43fc[];

extern "C" void func_ov007_021a7420(void *self)
{
    uint8_t *s = (uint8_t *)self;
    
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
        func_02005988(&loc1, data_ov007_021c43e8[3]);
        func_ov007_021a75ec(obj, self, &loc1, *(Pair *)&data_ov007_021c43e8[7]);
        func_020059cc(&loc1);
        *(void **)obj = data_ov007_021c4504;
    }
    *(void **)(s + 0xbc) = obj;
    func_020695ec(self, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(&loc2, data_ov007_021c43e8[4]);
        func_ov007_021a75ec(obj, self, &loc2, *(Pair *)&data_ov007_021c43e8[9]);
        func_020059cc(&loc2);
        *(void **)obj = data_ov007_021c45a0;
    }
    *(void **)(s + 0xc0) = obj;
    func_020695ec(self, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(&loc3, data_ov007_021c43e8[2]);
        func_ov007_021a75ec(obj, self, &loc3, *(Pair *)&data_ov007_021c43e8[11]);
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

    {
        Obj *o = (Obj *)func_0203b95c(data_ov007_021c43e8[1], *(void **)(s + 0xb8), 0, 1);
        o->v8(3);
        o->v15(3);
        o->v3(*(Pair *)data_ov007_021c43fc);
        o->v14(1, 0);
        o->v10();
        obj = o;
    }

    func_02056bc0(s + 0x48, obj);

    switch (**(uint32_t **)(s + 0xc8)) {
    case 1:
    default:
        func_020697ac(self, *(void **)(s + 0xbc));
        break;
    case 2:
        func_020697ac(self, *(void **)(s + 0xc0));
        break;
    case 0:
        func_020697ac(self, *(void **)(s + 0xc4));
        break;
    }

    func_02056bc0(s + 0x48, *(void **)(s + 0xb8));
}
