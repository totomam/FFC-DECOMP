#include "ffc/types.h"

typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    uint8_t f10;
} Obj;

extern void func_0200a26c(void);
extern void func_02062fe8(void);
extern void func_0209d06c(void *p, int a, int b, void (*f)(void));
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void func_02056844(void *p);
extern void *func_0205681c(int size);
extern void *func_0209cec8(void *a, int b, int c, void (*d)(void), void (*e)(void));

void func_020642e8(uint8_t *self, int arg1)
{
    Obj *p = *(Obj **)(self + 0x7c);
    if (arg1 == (p == 0)) {
        return;
    }
    if (arg1 != 0) {
        func_0209d06c(p->f0, 0xc, 8, func_0200a26c);
        func_0209d06c(((Obj *)*(Obj **)(self + 0x7c))->f4, 0xc, 8, func_0200a26c);
        p = *(Obj **)(self + 0x7c);
        if (p != 0) {
            if (p->f8 != 0) {
                if (p->f10 != 0) {
                    func_02052d3c(p->f8, p->fc);
                }
                func_02052c04(p->f8);
            }
            func_02056844(p);
        }
        *(Obj **)(self + 0x7c) = 0;
    } else {
        Obj *n = (Obj *)func_0205681c(0x14);
        if (n != 0) {
            n->f8 = 0;
            n->f10 = 0;
        }
        *(Obj **)(self + 0x7c) = n;
        ((Obj *)*(Obj **)(self + 0x7c))->f0 = func_0209cec8(*(void **)(self + 0x28), 0xc, 8, func_02062fe8, func_0200a26c);
        ((Obj *)*(Obj **)(self + 0x7c))->f4 = func_0209cec8(*(void **)(self + 0x28), 0xc, 8, func_02062fe8, func_0200a26c);
    }
}
