#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    void *w4;
    uint32_t w8;
    uint8_t b12;
} Loc;

extern void func_02016630(Loc *p, void *v);
extern void *func_02052d90(void *a, uint32_t b);
extern int32_t *func_0201ea2c(void *self, void *x);
extern int32_t func_02081210(int32_t a, int32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(Loc *p);
extern void *data_020b8e44;

int32_t func_0201eaa8(void *param) {
    Loc loc;
    volatile uint8_t pad[0x28];
    void *self;
    Loc *p;
    int32_t *o;
    int32_t r4;
    int32_t t;

    (void)pad;
    p = &loc;
    self = param;
    func_02016630(p, data_020b8e44);
    o = func_0201ea2c(self, func_02052d90(p->w4, p->w8));
    t = o[3];
    r4 = func_02081210(o[3] + o[2], 0x2000) >> 12;
    if (p->w4 != 0) {
        if (p->b12 != 0) {
            func_02052d3c(p->w4, p->w8);
        }
        func_02052c04(p->w4);
    }
    func_02053290(p);
    return r4;
}
