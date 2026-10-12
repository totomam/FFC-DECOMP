/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);
extern "C" void func_02056c4c(void *p);
extern "C" void *func_02076314(void *p);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void *func_02056aec(void *p);
extern "C" int func_02076404(void *p);
extern "C" void *func_02076434(void *p);

struct Vt {
    virtual void *m0(void *a);
    virtual void *m1(void *a);
    virtual void *m2(void *a);
    virtual void *m3(void *a);
    virtual void *m4(void *a);
    virtual void *m5(void *a);
    virtual void *m6(void *a);
    virtual void *m7(void *a);
};

#define OFF(p, o) ((uint8_t *)(p) + (o))
#define PTR(p, o) (*(void **)((uint8_t *)(p) + (o)))

extern "C" void func_02076c34(void *self) {
    struct Blk { uint32_t w[4]; Blk() {} ~Blk() {} } tmp;
    (void)tmp;
    void *a1 = PTR(self, 0xa0);
    uint8_t st1 = *OFF(a1, 0x12);
    void *sub1 = OFF(a1, 0x1c);
    int r41;
    void *a2;
    uint8_t st2;
    void *sub2;
    int r42;
    void *r1v;
    Vt *o;
    Vt *s = (Vt *)self;

    if (st1) {
        func_0208763c(sub1);
    }
    r41 = (PTR(a1, 0x14) == 0);
    if (st1) {
        func_02087678(sub1);
    }
    if (r41) {
        func_02056c4c(PTR(self, 0x9c));
        func_02056bc0(OFF(self, 0x14), func_02076314(PTR(self, 0x80)));
        *(int *)PTR(self, 0x90) = 0;
        func_02056bc0(OFF(self, 0x14), func_02056aec(self));
        return;
    }

    a2 = PTR(self, 0x9c);
    st2 = *OFF(a2, 0x12);
    sub2 = OFF(a2, 0x1c);
    if (st2) {
        func_0208763c(sub2);
    }
    r42 = (PTR(a2, 0x14) == 0);
    if (st2) {
        func_02087678(sub2);
    }
    if (r42) {
        func_02056c4c(PTR(self, 0xa0));
        if (func_02076404(PTR(self, 0x80))) {
            func_02056bc0(OFF(self, 0x14), func_02076314(PTR(self, 0x80)));
            r1v = func_02076434(PTR(self, 0x80));
            o = (Vt *)PTR(self, 0x84);
            r1v = o->m3(r1v);
            o = (Vt *)PTR(self, 0x84);
            r1v = o->m1(r1v);
            func_02056bc0(OFF(self, 0x14), r1v);
            *(int *)PTR(self, 0x90) = 2;
            func_02056bc0(OFF(self, 0x14), func_02056aec(self));
            return;
        }
        if (*OFF(self, 0x98)) {
            s->m7((void *)(uint32_t)*OFF(self, 0x99));
            r1v = s->m5((void *)4);
            o = (Vt *)PTR(self, 0x84);
            r1v = o->m1(r1v);
            func_02056bc0(OFF(self, 0x14), r1v);
        }
        *(int *)PTR(self, 0x90) = 1;
        func_02056bc0(OFF(self, 0x14), func_02056aec(self));
    }
}
