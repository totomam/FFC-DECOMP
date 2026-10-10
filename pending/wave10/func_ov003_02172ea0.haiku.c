#include "ffc/types.h"

extern char data_ov003_0217b7b0[];
extern void func_02056858(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02056db0(void *p);

struct Sub {
    void *f0;        /* 0xac */
    void *f4;        /* 0xb0 */
    void *f8;        /* 0xb4 */
    uint8_t fc;      /* 0xb8 */
};

struct Obj {
    void *vtbl;      /* 0x00 */
    uint8_t pad1[0xa4 - 4];
    void *f_a4;      /* 0xa4 */
    uint8_t pad2[0xac - 0xa8];
    struct Sub sub;  /* 0xac */
};

void *func_ov003_02172ea0(void *p) {
    struct Obj *o = (struct Obj *)p;
    struct Sub *r4;

    o->vtbl = data_ov003_0217b7b0;
    if (o->f_a4 != 0) {
        func_02056858(o->f_a4);
        o->f_a4 = 0;
    }
    r4 = &o->sub;
    if (r4->f4 != 0) {
        if (r4->fc != 0) {
            func_02052d3c(r4->f4, r4->f8);
        }
        func_02052c04(r4->f4);
    }
    func_02053290(r4);
    func_02056db0(o);
    return o;
}
