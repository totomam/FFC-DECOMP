#include "ffc/types.h"

extern void func_02056c4c(void *x);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *x, int y);
extern void func_02005988(void *buf, void *src);
typedef struct { int a; int b; } P;
extern void *func_02033094(void *a, void *buf, int b, P c, int e, int f);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

typedef struct {
    uint8_t pad[0xf8];
    void *f8;
    int fc;
} Obj;

void func_ov013_021bcb64(Obj *p)
{
    P pr;
    uint8_t buf[12];
    void *r6;

    p->fc = p->fc - 1;
    if (p->fc == 0) {
        func_02056c4c(p->f8);
        int zero = 0;
        int flag = 0;
        r6 = func_0205681c(0xa4);
        if (r6 != 0) {
            pr.a = 0x80;
            pr.b = 0x60;
            void *t = func_020159c8(data_020b8e44, 0x1bf);
            func_02005988(buf, t);
            r6 = func_02033094(r6, buf, 1, pr, 4, zero);
            flag = 1;
        }
        func_02056bc0(p->f8, r6);
        if (flag) {
            func_020059cc(buf);
        }
    }
}
