/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_ov004_02148fd0(void *p);
extern "C" int32_t func_ov004_02148fc8(void *p);
extern "C" int32_t func_ov004_02148fc0(void *p);
extern "C" int32_t func_02064b38(void *obj);
extern "C" void func_ov004_02149160(void *p);

#define F32(p, off) (*(int32_t *)((uint8_t *)(p) + (off)))
#define U8(p, off) (*(uint8_t *)((uint8_t *)(p) + (off)))
#define VCALL(obj, n) ((*(void (**)(void *, int32_t, int32_t))((*(void ***)(obj))[14]))((obj), (n), 0))

struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int gt(const Num &a, int b) { return a.v < b; }
extern "C" void func_ov004_0214922c(void *self) {
    uint8_t *p = (uint8_t *)self;
    void *obj;
    int32_t a, b, t;
    int32_t buf[11];

    F32(p, 0x94) = F32(p, 0x8c);
    F32(p, 0x98) = F32(p, 0x90);
    func_ov004_02148fd0(p);
    (void)buf;

    U8(p, 0x9d) = gt(F32(p, 0x98), F32(p, 0x90));
    U8(p, 0x9c) = gt(F32(p, 0x94), F32(p, 0x8c));

    t = F32(p, 0x84) << 12;
    int32_t r0 = 0;
    int32_t r5 = 0;
    buf[0]=0;
    if (U8(p, 0xa4) == 0) {
        if (F32(p, 0x94) >= t) {
            r5 = 1;
        }
    }
    if (r5 != 0) {
        if (F32(p, 0x8c) < t) {
            r0 = 1;
        }
    }
    if (r0 != 0) {
        U8(p, 0xa4) = 1;
    }

    if (func_ov004_02148fc8(p) != 0) {
        obj = *(void **)(p + 0xa0);
        VCALL(obj, 4);
    } else if (func_ov004_02148fc0(p) != 0) {
        obj = *(void **)(p + 0xa0);
        VCALL(obj, 3);
    } else {
        obj = *(void **)(p + 0xa0);
        if (func_02064b38(obj) == 0) {
            obj = *(void **)(p + 0xa0);
            VCALL(obj, 2);
        }
    }

    if (func_ov004_02148fc8(p) != 0) {
        func_ov004_02149160(p);
    } else if (func_ov004_02148fc0(p) != 0) {
        func_ov004_02149160(p);
    }
}
