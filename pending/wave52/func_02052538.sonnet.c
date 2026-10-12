#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02005988(void *dst, void *src);
extern void func_020523e8(void *out, void *src, void *tmp);
extern void *func_020059cc(void *object);
extern void func_020525c4(void *src, void *tmp);
extern void func_02088f30(void);
extern void func_02087678(void *p);
extern uint8_t data_0213dfc4[];
extern uint8_t data_0213dfa0[];
extern uint8_t data_0213dfa4[];

typedef struct RefObj {
    void **vtbl;
    uint32_t count;
} RefObj;

typedef struct Local {
    void *obj;
    uint32_t pad[4];
    void *g;
    uint8_t flag;
} Local;

void func_02052538(void *p0)
{
    uint8_t b2[12];
    uint8_t b1[12];
    Local l;
    RefObj *r;
    void *obj;

    l.g = data_0213dfc4;
    l.flag = 1;
    if (l.flag != 0) {
        func_0208763c();
    }
    func_02005988(b2, p0);
    func_020523e8(&l, data_0213dfa0, b2);
    obj = l.obj;
    func_020059cc(b2);
    if (obj != data_0213dfa4) {
        r = *(RefObj **)((uint8_t *)obj + 0x18);
        if (--r->count == 0) {
            if (r) {
                ((void (*)(RefObj *))r->vtbl[1])(r);
            }
            func_02005988(b1, p0);
            func_020525c4(data_0213dfa0, b1);
            func_020059cc(b1);
        }
    } else {
        func_02088f30();
    }
    if (l.flag != 0) {
        func_02087678(l.g);
    }
}
