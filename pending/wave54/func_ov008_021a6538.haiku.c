#include "ffc/types.h"

typedef struct {
    uint32_t w[4];
} V16;

extern void func_020628ac(void *c, V16 a);
extern void func_02056c4c(void *o);
extern void *func_ov005_02195e2c(void *c, V16 a, V16 b, int x, int y);
extern void func_02056bc0(void *object, void *node);
extern void func_ov008_021a68b0(void *self);
extern void func_02005988(void *obj, const void *data);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern uint8_t data_ov008_021a9234;

#define VTF(o, idx) (((void **)*(void **)(o))[idx])
#define FLD_E0(s) (*(void **)((s) + 0xe0))
#define FLD_DC(s) (*(void **)((s) + 0xdc))

void func_ov008_021a6538(uint8_t *self, void *obj)
{
    uint32_t buf[4];
    uint32_t i;
    uint32_t idx;
    uint8_t *pc;
    uint32_t off;
    void *r;

    self[0x102] = 0;
    if (obj == 0) {
        ((void (*)(void *))VTF(FLD_E0(self), 11))(FLD_E0(self));
        return;
    }
    if (((int (*)(void *))VTF(FLD_E0(self), 12))(FLD_E0(self)) != 0) {
        ((void (*)(void *))VTF(FLD_E0(self), 10))(FLD_E0(self));
        func_020628ac(FLD_E0(self), ((V16 (*)(void *))VTF(obj, 4))(obj));
    } else {
        func_02056c4c(FLD_DC(self));
        r = func_ov005_02195e2c(FLD_E0(self),
                ((V16 (*)(void *))VTF(FLD_E0(self), 7))(FLD_E0(self)),
                ((V16 (*)(void *))VTF(obj, 4))(obj), 10, -5);
        func_02056bc0(FLD_DC(self), r);
    }

    pc = self + 0x10c;
    off = 0x100;
    for (i = 0; i < 8; i++) {
        *pc = (uint8_t)i;
        idx = (uint8_t)(*pc + (self[off] << 3));
        if (obj == ((void **)*(void **)(self + 0xc4))[i] &&
            idx < *(uint32_t *)(self + 0xf8)) {
            func_ov008_021a68b0(self);
            return;
        }
        func_02005988(buf, &data_ov008_021a9234);
        func_02068ddc(*(void **)(self + 0xe4), buf);
        func_020059cc(buf);
    }
}
