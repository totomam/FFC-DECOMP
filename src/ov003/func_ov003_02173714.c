#include "ffc/types.h"

extern char data_ov003_0217b8ec[];
extern void func_02056858(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02056db0(void *p);

struct Sub {
    void *f0;        /* 0x8c */
    void *f4;        /* 0x90 */
    void *f8;        /* 0x94 */
    uint8_t fc;      /* 0x98 */
};

struct Obj {
    void *vtbl;      /* 0x00 */
    uint8_t pad1[0x8c - 4];
    struct Sub sub;  /* 0x8c */
    uint8_t pad2[0xa8 - 0x8c - sizeof(struct Sub)];
    void *f_a8;      /* 0xa8 */
};

void *func_ov003_02173714(void *p) {
    struct Obj *o = (struct Obj *)p;
    struct Sub *r4;

    o->vtbl = data_ov003_0217b8ec;
    if (o->f_a8 != 0) {
        func_02056858(o->f_a8);
        o->f_a8 = 0;
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
