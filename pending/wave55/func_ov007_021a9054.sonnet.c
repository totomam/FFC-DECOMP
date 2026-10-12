/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair {
    uint32_t lo;
    uint32_t hi;
};
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void f3(Pair p); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void f10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void f14(uint32_t a, uint32_t b); };

extern "C" void func_020696e0(void *object, uint8_t value);
extern "C" void func_02069700(void *object, uint8_t a, uint8_t b);
extern "C" void *func_0203b81c(uint32_t size);
extern "C" void *func_0205681c(uint32_t size);
extern "C" void func_02005988(void *dst, uint32_t value);
extern "C" void func_ov007_021a9244(void *obj, void *self, void *tmp, Pair value);
extern "C" void *func_020059cc(void *object);
extern "C" void func_020695ec(void *self, void *obj);
extern "C" void *func_ov007_021ae310(void *obj, void *param);
extern "C" void func_020697ac(void *self, void *obj);
extern "C" V *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern "C" void func_02056bc0(void *a, void *b);
extern "C" void func_02069670(void *self, void *a, uint32_t b, void *c);
extern "C" uint32_t data_ov007_021c47a4[];
extern "C" uint32_t data_ov007_021c4908[];
extern "C" uint32_t data_ov007_021c49a4[];
extern "C" uint32_t data_ov007_021c4970[];
extern "C" uint32_t data_ov007_021c47e4[];

extern "C" void func_ov007_021a9054(void *self)
{
    
    void *obj; uint8_t *p = (uint8_t *)self;
    uint8_t tmp1[12];
    uint8_t tmp2[12];
    uint8_t tmp3[12];
    Pair v;
    int kind;
    V *o;
    V *o2;

    func_020696e0(p, 1);
    func_02069700(p, 0, 1);
    *(void **)(p + 0xb8) = func_0203b81c(100);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(tmp1, data_ov007_021c47a4[0x14 / 4]);
        func_ov007_021a9244(obj, p, tmp1, *(Pair *)&data_ov007_021c47a4[0x48 / 4]);
        func_020059cc(tmp1);
        *(uint32_t **)obj = data_ov007_021c4908;
    }
    *(void **)(p + 0xbc) = obj;
    func_020695ec(p, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(tmp2, data_ov007_021c47a4[0xc / 4]);
        func_ov007_021a9244(obj, p, tmp2, *(Pair *)&data_ov007_021c47a4[0x18 / 4]);
        func_020059cc(tmp2);
        *(uint32_t **)obj = data_ov007_021c49a4;
    }
    *(void **)(p + 0xc0) = obj;
    func_020695ec(p, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(tmp3, data_ov007_021c47a4[0x4 / 4]);
        func_ov007_021a9244(obj, p, tmp3, *(Pair *)&data_ov007_021c47a4[0x38 / 4]);
        func_020059cc(tmp3);
        *(uint32_t **)obj = data_ov007_021c4970;
    }
    *(void **)(p + 0xc4) = obj;
    func_020695ec(p, obj);

    obj = func_0205681c(0x98);
    if (obj != 0) {
        obj = func_ov007_021ae310(obj, *(void **)(p + 0xb8));
    }
    *(void **)(p + 0xcc) = obj;
    func_020695ec(p, obj);

    kind = **(int **)(p + 0xd0);
    if (kind == 2) {
        func_020697ac(p, *(void **)(p + 0xc0));
    } else if (kind == 3) {
        func_020697ac(p, *(void **)(p + 0xc4));
    } else {
        func_020697ac(p, *(void **)(p + 0xbc));
    }

    o = func_0203b95c((void *)data_ov007_021c47a4[2], *(void **)(p + 0xb8), 2, 1);
    o->f14(1, 0);
    o->f3(*(Pair *)data_ov007_021c47e4);
    o->f10();
    func_02056bc0(p + 0x48, o);

    o2 = func_0203b95c((void *)data_ov007_021c47a4[4], *(void **)(p + 0xb8), 2, 1);
    o2->f14(1, 0);
    o2->f3(*(Pair *)data_ov007_021c47e4);
    o2->f10();
    func_02056bc0(p + 0x48, o2);

    func_02069670(p, *(void **)(p + 0xbc), 4, *(void **)(p + 0xcc));
    func_02056bc0(p + 0x48, *(void **)(p + 0xb8));
}
