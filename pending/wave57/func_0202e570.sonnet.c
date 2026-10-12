/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
void func_0208763c(void *p);
void func_02087678(void *p);
void func_02056c4c(void *p);
void func_02030e20(void *a, void *b, void *c, void *d);
void func_0202e570(uint8_t *base);
}
struct W { uint32_t pad[3]; uint32_t f; };
static inline void en(W *w) { w->f = (w->f & ~0xffu) | 1; }
static inline void dis(W *w) { w->f = w->f & ~0xffu; }
struct Guard {
    uint8_t *base; void *lock; uint32_t *cnt;
    Guard(uint8_t *b) {
        uint8_t *l = b + 0x4b8;
        base = b; cnt = (uint32_t *)(b + 0x4e8); lock = l;
        func_0208763c(l);
        *cnt = *cnt + 1;
        if (*cnt == 1) {
            en((W *)(base + 0x48));
            en((W *)(base + 0x14));
        }
        func_02087678(l);
    }
    ~Guard() {
        func_0208763c(lock);
        *cnt = *cnt - 1;
        if (*cnt == 0) {
            dis((W *)(base + 0x48));
            dis((W *)(base + 0x14));
        }
        func_02087678(lock);
    }
};
struct Lock {
    void *m; uint8_t f;
    Lock(void *p) { m = p; f = 1; if (f) func_0208763c(m); }
    ~Lock() { if (f) func_02087678(m); }
};
void func_0202e570(uint8_t *p) {
    struct { uint32_t p0[2]; uint32_t sa; uint32_t sb; uint32_t *sp10; uint32_t p1[2]; } L;
    Lock l(p + 0x4d0);
    Guard g(p);
    *(uint32_t *)(p + 0xac) = 0;
    *(uint32_t *)(p + 0xb0) = 0;
    *(uint32_t *)(p + 0xb4) = 0;
    *(uint32_t *)(p + 0xa0) = 0;
    *(uint32_t *)(p + 0xa4) = 0;
    *(uint32_t *)(p + 0xa8) = 0;
    *(uint32_t *)(p + 0xc4) = 1u << 12;
    *(uint32_t *)(p + 0xc8) = 0;
    *(uint8_t *)(p + 0xc0) = 1;
    *(uint16_t *)(p + 0xba) = 0x7fff;
    *(uint32_t *)(p + 0x47c) = 0;
    *(uint32_t *)(p + 0xbc) = 0;
    *(int32_t *)(p + 0xcc) = 0x0fffffff;
    *(uint32_t *)(p + 0xd0) = 0;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x90) = 0;
    *(uint32_t *)(p + 0x94) = 0;
    func_02056c4c(p + 0x48);
    L.sb = *(uint32_t *)(p + 0x48c);
    L.sp10 = (uint32_t *)(p + 0x488);
    func_02030e20(&L.sa, p + 0x484, &L.sb, &L.sp10);
    void **obj = *(void ***)(p + 0x80);
    if (obj) {
        ((void (*)(void *))(*(void ***)obj)[1])(obj);
        *(uint32_t *)(p + 0x80) = 0;
    }
}
