/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct {
    int32_t w;
    int32_t h;
} Size;

typedef struct {
    uint32_t x;
    uint32_t y;
    int32_t w;
    int32_t h;
} Rect;

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
};

extern "C" {
void func_02065f50(void *self, Size s);
uint32_t func_020583cc(void *obj, uint32_t a, uint32_t b, uint32_t c);
void func_02066f3c(void *self, Rect r);
void func_020670f0(void *self, uint32_t v);
uint32_t func_0206687c(void *object, uint32_t first, uint32_t second);
extern char data_020b1854[];

void *func_0206660c(void *self, void *a, uint32_t b, Size s, uint32_t arg1, uint32_t arg2)
{
    uint8_t *p = (uint8_t *)self;
    Rect r;
    uint32_t *q;

    func_02065f50(self, s);
    *(uint32_t *)(p + 0x20) = b;
    *(void **)p = data_020b1854;
    q = (uint32_t *)(p + 0x2c);
    q[1] = 0;
    q[2] = 0;
    q = (uint32_t *)(p + 0x38);
    *(void **)(p + 0x1c) = a;
    *(uint32_t *)(p + 0x2c) = 0;
    *(uint32_t *)(p + 0x38) = 0;
    q[1] = 0;
    q[2] = 0;
    *(uint32_t *)(p + 0x44) = func_020583cc(*(void **)(*(uint8_t **)((uint8_t *)a + 0x18) + 0xc), 1, arg1, 1);

    r.x = 0;
    r.y = 0;
    r.w = (s.w + 7) / 8 * 8;
    r.h = (s.h + 7) / 8 * 8;
    func_02066f3c(self, r);
    func_020670f0(self, arg2);
    func_0206687c(self, 0, 0);
    ((Obj *)self)->v15();
    return self;
}
}
