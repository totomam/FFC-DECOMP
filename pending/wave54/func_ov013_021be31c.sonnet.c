/* cflags: -lang c++ */
#include "ffc/types.h"
struct Num { int v; Num(int x) : v(x) {} ~Num() {} };
inline int diff(const Num &a, int b) { return a.v - b; }
extern "C" {

typedef struct E { char pad[0x14]; void *a; void *b; } E;
typedef struct { uint32_t a, b; } S;
typedef void (*VFn)(void *);

extern void *data_0213e098;
extern S data_ov013_021c42e0;
extern void *data_020b8e44;
extern S data_ov013_021c42e8;

extern void func_02055050(void *a, int b);
extern void func_02056bf4(void *a);
extern void func_02056858(void *a);
extern void *func_ov013_021be2dc(void *self, S s);
extern void *func_0206cbf4(void *a);
extern void func_02056bc0(void *obj, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02032d24(void *a, S s, void *d, uint32_t e, uint32_t f);
extern void func_020059cc(void *a);

static inline void rel(void *self, void **slot)
{
    if (*slot != 0) {
        func_02056bf4((char *)self + 0x48);
        void *p = *slot;
        if (p != 0) {
            ((VFn *)(*(void **)p))[1](p);
        }
        *slot = 0;
    }
}

void func_ov013_021be31c(void *self)
{
    void **w = (void **)self;
    void *p;
    void *r6;
    uint32_t i;
    uint32_t buf[3];
    S sp14;
    int flag;

    func_02055050(data_0213e098, 2);
    rel(self, (void **)((char *)self + 0x118));
    rel(self, (void **)((char *)self + 0xfc));

    for (i = 0; i < *(uint32_t *)((char *)self + 0x124); i++) {
        {
            E *e = *(E **)((char *)self + 0x120);
            func_02056858(e[i].a);
            e = *(E **)((char *)self + 0x120);
            func_02056858(e[i].b);
        }
    }

    { int n = (int)w[0x49]; w[0x49] = (void*)diff(n, n); }

    uint32_t z = 0;
    r6 = func_ov013_021be2dc(self, data_ov013_021c42e0);

    func_02056bc0(&w[5], func_0206cbf4(w[0x3d]));
    func_02056bc0(&w[5], r6);

    r6 = func_0205681c(0xb0);
    flag = 0;
    if (r6 != 0) {
        func_02005988(buf, func_020159c8(data_020b8e44, 0x124 + 0x97));
        sp14.a = 0x80;
        sp14.b = 0x60;
        r6 = func_02032d24(r6, sp14, buf, 4, z);
        flag = 1;
    }
    func_02056bc0(&w[5], r6);
    if (flag && z == 0) {
        func_020059cc(buf);
    }

    *(S *)((char *)self + 0xb8) = data_ov013_021c42e8;
}

}
