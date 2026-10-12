/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual ~Obj();
};

extern "C" {
extern void func_02056c4c(void *p);
extern void func_ov003_0215bd5c(void *p);
extern void *func_020059cc(void *object);
extern void func_02056844(void *p);
extern void func_0202984c(void *p);
extern void func_ov003_0215bd30(void *p);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);
extern void func_02050c28(void *p);
extern void func_02056db0(void *p);
extern char data_ov003_0217a098[];
extern char data_ov003_0217a0b4[];

void *func_ov003_0215589c(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    Obj *x;

    *(void **)p = data_ov003_0217a098;
    *(void **)(p + 0x80) = data_ov003_0217a0b4;
    func_02056c4c(p + 0x48);

    x = *(Obj **)(p + 0x2f4);
    if (x) {
        delete x;
        *(void **)(p + 0x2f4) = 0;
    }

    x = *(Obj **)(p + 0x364);
    if (x) {
        if (x) {
            func_ov003_0215bd5c((uint8_t *)x + 0x18);
            func_020059cc((uint8_t *)x + 0xc);
            func_020059cc(x);
            func_02056844(x);
        }
        *(void **)(p + 0x364) = 0;
    }

    x = *(Obj **)(p + 0x2cc);
    if (x) {
        delete x;
        *(void **)(p + 0x2cc) = 0;
    }

    x = *(Obj **)(p + 0x2d0);
    if (x) {
        delete x;
        *(void **)(p + 0x2d0) = 0;
    }

    x = *(Obj **)(p + 0x2d4);
    if (x) {
        delete x;
        *(void **)(p + 0x2d4) = 0;
    }

    func_0202984c(p + 0x224);
    func_0202984c(p + 0x17c);
    func_ov003_0215bd30(p + 0x16c);
    func_ov003_0215bd30(p + 0x15c);
    func_ov003_0215bd30(p + 0x14c);

    q = p + 0x98;
    if (*(void **)(q + 4) != 0) {
        if (q[0xc] != 0) {
            func_02052d3c(*(void **)(q + 4), *(void **)(q + 8));
        }
        func_02052c04(*(void **)(q + 4));
    }
    func_02053290(q);
    func_02050c28(p + 0x8c);
    func_02056db0(p);
    return self;
}
}
