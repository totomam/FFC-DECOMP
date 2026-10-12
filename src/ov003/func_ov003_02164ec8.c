/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual uint32_t v9(uint32_t x);
};

extern "C" {
extern Obj *func_0203b9b4(uint32_t x);
extern void *func_02057958(void);
extern void func_02056bc0(void *object, void *node);
void func_ov003_02164ec8(void *self);
}

void func_ov003_02164ec8(void *self)
{
    uint32_t *p = (uint32_t *)self;
    uint32_t *node = (uint32_t *)p[0x20];

    if (node != 0) {
        uint32_t a = node[1];
        uint32_t b = node[2];
        uint32_t m = a & (b ^ a);
        if (m & 0x1001) {
            p[3] = (p[3] & ~0xffu) | 2;
            return;
        }
    } else {
        Obj *obj = func_0203b9b4(1);
        func_02057958();
        p[0x20] = obj->v9(0);
        func_02056bc0(&p[0x12], obj);
    }

    if (p[0x21] != 0) {
        if (p[0x22] >= p[0x21]) {
            p[3] = (p[3] & ~0xffu) | 2;
            return;
        }
        p[0x22] = p[0x22] + 1;
    }
}
